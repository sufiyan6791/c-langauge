#include<stdio.h>
#include<conio.h>

void main(){
 int a,b,c,d;
 clrscr();
 printf("\n enter 4 value");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 (a>b)?(a>c)?(a>d)?printf("a is max"):printf("d is max"):(c>d)?printf("c is max"):printf("d is max"):(b>c)?(b>d)?printf("b is max"):printf("d is max"):(c>d)?printf("c is max"):printf("d is max");



       getch();

}





