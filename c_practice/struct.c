#include <stdio.h>
#include <string.h>

    struct persons
{
    char Name[10];
    char Last_Name[10];
    int age;
};

int main()
{
    persons eslam;
    strncpy(eslam.Name,"Eslam",6);
    strncpy(eslam.Last_Name,"Khalid",7);
   eslam.age = 34;


  printf("First Name: %s \n Last Name: %s \n age: %d ",eslam.Name, eslam.Last_Name, age);


    return 0;
}
