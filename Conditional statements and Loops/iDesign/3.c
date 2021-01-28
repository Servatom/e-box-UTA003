/* Electricity Bill */

#include<stdio.h>
int main(){
    int user_id, units ; char name[50]; float amt;
    printf("Enter the user id of user\n");
    scanf("%d", &user_id);
    printf("Enter the name of user\n");
    scanf("%s", name);
    printf("Enter the number of units consumed by user\n");
    scanf("%d", &units);

    if(units <= 100)
    amt = units*1.00;
    else if(units>100 && units<=300)
    amt = units * 2.00;
    else
    amt = units * 3.00;

    if(amt > 1000)
    amt = amt + (0.15*amt);

    if(amt<50)
    amt = 50;

    printf("Charge details\n%d %s %.2f",user_id, name, amt);
    return 0;
}