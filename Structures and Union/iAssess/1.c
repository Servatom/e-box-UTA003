#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Date
{
    int day;
    char month[10];
    int year;
};

struct Event
{
    char name[30];
    char type[30];
    int duration;
    float expenses;
    struct Date scheduledDate;
};
int monthcalc(char *s)
{
    if(strcmp(s,"January")==0)
    return 1;
    else if(strcmp(s,"February")==0)
    return 2;
    else if(strcmp(s,"March")==0)
    return 3;
    else if(strcmp(s,"April")==0)
    return 4;
    else if(strcmp(s,"May")==0)
    return 5;
    else if(strcmp(s,"June")==0)
    return 6;
    else if(strcmp(s,"July")==0)
    return 7;
    else if(strcmp(s,"August")==0)
    return 8;
    else if(strcmp(s,"September")==0)
    return 9;
    else if(strcmp(s,"October")==0)
    return 10;
    else if(strcmp(s,"November")==0)
    return 11;
    else
    return 12;
}

int main()
{
    int i,j,n;
    printf("Enter the number of events\n");
    scanf("%d",&n);
    struct Event e[n];
    struct Event temp;
    for(i=0;i<n;i++)
    {
        printf("Enter the name of the event %d\n",i+1);
        scanf(" %[^\n]s", e[i].name);
        printf("Enter the type of the event %d\n",i+1);
        scanf(" %s",e[i].type);
        printf("Enter the duration (in days) of the event %d\n",i+1);
        scanf("%d",&e[i].duration);
        printf("Enter the projected expenses (in lakhs) for the event %d\n",i+1);
        scanf("%f",&e[i].expenses);
        printf("Enter the day of the event %d\n",i+1);
        scanf("%d",&e[i].scheduledDate.day);
        printf("Enter the month of the event %d\n",i+1);
        scanf(" %s",e[i].scheduledDate.month);
        printf("Enter the year of the event %d\n",i+1);
        scanf("%d",&e[i].scheduledDate.year);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(e[j].scheduledDate.year>e[j+1].scheduledDate.year)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
            else if((e[j].scheduledDate.year==e[j+1].scheduledDate.year)&&(monthcalc(e[j].scheduledDate.month)>monthcalc(e[j+1].scheduledDate.month)))
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
            else if((e[j].scheduledDate.year==e[j+1].scheduledDate.year)&&(monthcalc(e[j].scheduledDate.month)==monthcalc(e[j+1].scheduledDate.month))&&(e[j].scheduledDate.day>e[j+1].scheduledDate.day))
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
        }
    }
    printf("Event details sorted by scheduled date\n");
    for(i=0;i<n;i++)
    {
        printf("Event Name : %s\n",e[i].name);
        printf("Event Type : %s\n",e[i].type);
        printf("Event Duration : %d\n",e[i].duration);
        printf("Projected Expense : %.1fL\n",e[i].expenses);
        printf("Event Date : %d %s %d\n",e[i].scheduledDate.day,e[i].scheduledDate.month,e[i].scheduledDate.year);
    }
    return 0;
}

