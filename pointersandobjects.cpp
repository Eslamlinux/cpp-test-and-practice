using namespace std;
#include <iostream>

class tclass{
    public:
    int age;
    string name;
    bool isempty(tclass *tocheck);
    tclass* todelete(tclass* todelete);
    void prntptr(tclass *entry){
        if(isempty(entry)){
            return;
        }
    cout << entry->name << "\t";
    cout << entry->age << "\n";
    }
    tclass* change_It(tclass* entry,string to_change_name = "unkown\n",int to_change_age =0){
        tclass* newclass = new tclass;
        newclass = entry;
        newclass->name = to_change_name;
        newclass->age = to_change_age;
        return newclass;
    }
};
tclass *ptr = new tclass;
tclass *emp = new tclass;
int main(){

ptr->name = "eslam khalid";
ptr->age = 33;
emp->name = "hassan khalid";
emp->age = 28;

tclass a;

a.prntptr(ptr);
a.prntptr(a.change_It(ptr,"aya khalid",31));
a.prntptr(ptr);
cout << boolalpha << a.isempty(ptr);
    return 0;
}

bool tclass::isempty(tclass *tocheck){
 return tocheck == NULL ? true:false;
}
