#include<stdio.h>
#include<conio.h>

void main(){
 char ch;
 clrscr();
 printf("\nm.monday");
 printf("\nt.tuesday");
 printf("\nw.wednesday");
 printf("\nT.thusday");
 printf("\nf.friday");
 printf("\ns.saturday");
 printf("\nS.sunday");

 printf("\nenter day") ;
 scanf("%c",&ch);

 switch(ch){
  case 'm':
  printf("monday");
  break;
  case 't':
  printf("tuesday");
  break;
  case 'w':
  printf("wednesday");
  break;
  case 'T':
  printf("thusday");
  break;
  case 'f':
  printf("friday");
  break;
  case 's':
  printf("saturday");
  break;
  case 'S':
  printf("sunday");
  break;


 }
  getch();

}