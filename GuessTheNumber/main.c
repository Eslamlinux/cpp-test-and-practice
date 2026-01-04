#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int random_num(int Max_Num)
{
    int num;
    rand() % Max_Num+1;
    return Max_Num;
}
int main()
{
    int balance, bet, guess, dice;
    srand(getpid());
    balnce = 1000;
    printf("make your bet");
    fflush(stdout);
    scanf("%d",&bet);
    printf("make your guss (1-6, and 0 means quit): \n");
    if(guess == 0)
        return 0;


    return 0;
}
