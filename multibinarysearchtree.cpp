/******************************************************************************
binarysearchtree.cpp
*******************************************************************************/
#include <iostream>
using namespace std;


class Node{
    public:
    int Fdata;
    string Sdata;
    Node* right;
    Node* left;
    Node(int Fvalue,string Svalue){
        Fdata = Fvalue;
        Sdata = Svalue;
        right = left = NULL;
    }
};

class BST{
    public:
    Node* root;
    BST(){
        root = NULL;
    }
    Node* insert(Node* r,int Fvalue, string Svalue){
        if(r == NULL){
            Node* newnode = new Node(Fvalue,Svalue);
            r = newnode;
        }
        else if(Fvalue < r->Fdata){
            r->left = insert(r->left ,Fvalue,Svalue);
        }
        else{
            r->right = insert(r->right,Fvalue,Svalue);
        }
        return r;
    }
    void insert(int Fvalue,string Svalue){
        root = insert(root,Fvalue,Svalue);
    }
    void preorder(Node* r){
        if(r == NULL){
            return;
        }
        else{
            cout << r->Fdata << " " << r->Sdata << endl;
            preorder(r->left);
            preorder(r->right);
        }
    }
    Node* Search(Node* r,int id){
        if(r == NULL){
            return NULL;
        }
        else if(id == r->Fdata){
            return r;
        }
        else if(id < r->Fdata){
            return Search(r->left,id);
        }
        else{
            return Search(r->right,id);
        }
    };
    bool Search(int id){
        Node* result = Search(root,id);
        cout << boolalpha;
        return result == NULL? false : true;
    }
    void SearchName(int id){
        if(!Search(id)){
            cout << id << " not found it\n" << boolalpha;
        }
        else{
            cout << "Id:" << root->Fdata << "\nName: " << root->Sdata << "\n" ;
        }

    }
    //need more work on it
    // Node* SearchByName(Node* r ,string name){
    //     if(r == NULL){
    //         return NULL;
    //     }
    //     else if(r->Sdata == name){
    //         return r;
    //     }
    //     else if(name < r->Sdata){
    //         return SearchByName(r->left,name);
    //     }
    //     else{
    //         return SearchByName(r->right,name);
    //     }
    //     return r;
    // }
    // void SearchByName(string name){
    //     Node* result = SearchByName(root,name);
    //     cout << "name is: " << result->Sdata << "Id: " <<  result->Fdata;
    // }
};
int main()
{

BST b1;
b1.insert(45,"eslam");
b1.insert(15,"hassan");
b1.insert(47,"mohamed");
b1.insert(90,"aya");
b1.insert(10,"najah");
b1.insert(55,"khalid");
b1.insert(12,"ahmed");
b1.insert(20,"sagda");
b1.insert(50,"selia");

b1.preorder(b1.root);
cout << b1.Search(100) << endl;
b1.SearchName(12);
// b1.SearchByName("selia");
    return 0;
}
