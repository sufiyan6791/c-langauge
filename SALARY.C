#include<stdio.h>
#include<conio.h>

void main(){
  int salary,HRA,DA,TA,finalsalary;
  clrscr();
  printf("enter the salary");
  scanf("%d",&salary);

  HRA=salary*10/100;
  DA=salary*5/100;
  TA=salary*8/100;

  finalsalary=salary+HRA+DA+TA;
  printf("\n final salary %d",finalsalary);

  getch();






}