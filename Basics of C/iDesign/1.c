/* Splitting into teams */

#include <stdio.h>
int main(){
    int ss, team, left;
    printf("Number of students:\n");
    scanf("%d", &ss);
    printf("Number of teams:\n");
    scanf("%d", &team);
    left = ss % team;
    printf("The number of students in each team is %d and left out is %d", (ss/team),left);
    return 0;
}