/******************************************************************************
multi binary search tree
*******************************************************************************/
#include <iostream>
using namespace std;


class Node{
    public:
    int Fdata;
    string Sdata;
    Node* right;
    Node* left;
    Node(int Fvalue,string Svalue)
    {
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
    
    Node* miniId(Node* r){
        if(r == NULL){
            return NULL;
        }
        else if(r->left == NULL){
            return r;
        }
        else{
            return miniId(r->left);
        }
    }
    Node* maximumId(Node* r){
        if(r == NULL){
            return NULL;
        }
        else if(r->right == NULL){
            return r;
        }
        else{
            return maximumId(r->right);
        }
    }
    
    Node* Delete(Node* r,int Fvalue){
        if(r == NULL){
            return NULL;
        }
        else if(Fvalue < r->Fdata){
            r->left = Delete(r->left,Fvalue);
        }
        else if(Fvalue > r->Fdata){
            r->right = Delete(r->right,Fvalue);
        }
        else{
            if(r->left == NULL && r->right == NULL){
                r = NULL;
            }
            else if(r->left !=NULL && r->right == NULL){
                r->Fdata = r->left->Fdata;
                r->Sdata = r->left->Sdata;
                delete r->left;
                r->left = NULL;
            }
            else if(r->right != NULL && r->left == NULL){
                r->Fdata = r->right->Fdata;
                r->Sdata = r->right->Sdata;
                delete r->right;
                r->right = NULL;
            }
            else{
                Node* mini = miniId(r->right);
                r->Fdata = mini->Fdata;
                r->Sdata = mini->Sdata;
                r->right = Delete(r->right,mini->Fdata);
            }
        }
        return r;
    }
};
int main()
{

BST b1;
// b1.insert(45,"eslam");
// b1.insert(15,"hassan");
// b1.insert(47,"mohamed");
b1.insert(90,"aya");
// b1.insert(10,"najah");
// b1.insert(55,"khalid");
// b1.insert(12,"ahmed");
// b1.insert(20,"sagda");
// b1.insert(50,"selia");

b1.Delete(b1.root,90);


b1.preorder(b1.root);
cout << b1.Search(100) << endl;
cout << " *******search******** \n";
b1.SearchName(50);
// b1.SearchByName("selia");
cout << " *******mini******** \n";
Node* topr = b1.miniId(b1.root);
cout << topr->Fdata <<endl;
cout << " *******max******** \n";
Node* toprmax = b1.maximumId(b1.root);
cout << toprmax->Fdata << endl;
    return 0;
}
