using namespace std;
#include <iostream>

class tclass{
    public:
    int age;
    string name;
};
tclass *ptr = new tclass;
tclass *emp = new tclass;
void prntptr(tclass *entry){
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
int main(){

ptr->name = "eslam khalid";
ptr->age = 33;
emp->name = "hassan khalid";
emp->age = 28;


prntptr(ptr);
prntptr(change_It(ptr,"aya khalid",31));
prntptr(ptr);
prntptr(emp);
delete ptr,emp;
    return 0;
}