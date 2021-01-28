#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *f1,*f2;
    f1=fopen("input.txt","r");
    f2=fopen("output.txt","w");
    char c;
    c=fgetc(f1);
    while(c!=EOF)
    {
        if(c!=' ')
        fputc(c,f2);
        else
        {
            fputc(c,f2);
            c=fgetc(f1);
            fputc(toupper(c),f2);
        }
        c=fgetc(f1);
        
    }
    fclose(f1);
    fclose(f2);
    return 0;
}

