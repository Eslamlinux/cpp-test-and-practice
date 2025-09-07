#include <iostream>
using namespace std;

struct Node{
    char data;
    Node* next;
};
struct linkedlc{
    Node* head ;
    linkedlc();
    bool isEmpty();
    void insertNode(char enterChar);
    void insertAppend(char enterChar);
    int count_words();
    void display();
    void deleteNode(char to_delete);
    void insertBefore(char to_insert,char before_It);
    bool is_found(char to_find);
};
int main(){
    linkedlc ls;
    cout << boolalpha << ls.isEmpty() << noboolalpha << endl;
    ls.insertNode('m');
    ls.insertNode('a');
    ls.insertNode('l');
    ls.insertNode('s');
    ls.insertNode('E');
    cout << ls.count_words() << endl;
    cout << endl;
    cout << boolalpha << ls.isEmpty() << noboolalpha << endl;
    cout << boolalpha << ls.is_found('a') << endl;
    ls.display() ;

    return 0;
}
