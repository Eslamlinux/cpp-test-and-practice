using namespace std;
#include <iostream>
class Node{
    public:
    int data;
    Node* right;
    Node* left;
Node(int entrydata){
    right = left = NULL;
    data = entrydata;
}
};
class Bst{
    public:
    Node* root ;
    Bst(){
        root = NULL;
    }
    Node* insert(Node* ro,int daitem){
        if(ro == NULL){
            Node* newnode =new Node(daitem);
            ro = newnode;
        }
        else if(daitem < ro->data){
            ro->left = insert(ro->left , daitem);
        }
        else{
            ro->right = insert(ro->right,daitem);
        }
        return ro;
    }
    void insert(int item){
        root = insert(root, item);
    }
    void preOrderd(Node* r);
    void inOrderd(Node* r);
    void postOrderd(Node* r);


};



}
