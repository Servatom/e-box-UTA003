#include<stdio.h>
int main(){
  int x,y,l;
  char s='(';
  char ss=')';
  
  printf("Enter the x-coordinate of the left bottom vertex\n");
  scanf("%d",&x);
  printf("Enter the y-coordinate of the left bottom vertex\n");
  scanf("%d",&y);
  printf("Enter the length of a side\n");
  scanf("%d",&l);
  x=x+(l/2);
  y=y+(l/2);
  printf("The centre of the room is at %c%d,%d%c",s,x,y,ss);
  return 0;
}
