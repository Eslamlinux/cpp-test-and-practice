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
