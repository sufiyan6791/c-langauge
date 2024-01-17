#include<stdio.h>
#include<conio.h>

void main(){
    int s,d,t;

    clrscr();
     printf("enter value of s");
     scanf("%d",&s);
      printf("enter value of m");
     scanf("%d",&d);
     printf("\n before swapping s=%d,d=%d",s,d);
     t=s;
     s=d;
     d=t;
       printf("\n after swapping s=%d,d=%d",s,d);

       getch();





}