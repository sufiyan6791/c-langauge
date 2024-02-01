#include<stdio.h>
#include<conio.h>

void main(){
 char ch;
 clrscr();
 printf("enter digit");
 scanf("%c",&ch);

 if(ch >='a' && ch <='z') {

 printf(" it  is alphabate");
 }else if (ch >='0' && ch <='9'){
 printf("this is number");
 }
 else{
  printf("this is special character");
 }




 getch();
}