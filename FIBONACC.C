#include<stdio.h>
#include<conio.h>

void main(){
 int f=0,s=1,t,i=1;
 clrscr();
 while(i<=10){
 printf("%d\n",f);
 t=f+s;
 f=s;
 s=t;
 i++;
}
 getch();





}