#include<stdio.h>
#include<conio.h>

void main(){
   int a,b,c;
   clrscr();
   printf("enter the value ");
   scanf("%d %d",&a,&b);
   c=a+b;
   printf("addition is %d \n",c);
   c=a-b;
   printf("subtraction is %d",c);
   c=a*b;
   printf("\n multiplication is %d ",c);
   c=a/b;
   printf("\n division is %d ",c);
   c=a%b;
   printf("\n reminder is %d ",c);


 getch();

}