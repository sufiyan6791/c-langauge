#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define s .7
void main(){
     float r,b,area,l;
     clrscr();
     printf("enter radious r b l:");
     scanf("%f %f %f",&r,&b,&l);
     printf("area of circle is %.2f",pi*r*r);
     printf("\n area of square %f  ",r*r);
     printf("\n area ofinterest %f",r*b*l/100);
     printf("\n area of triangle %f ",s*b/ 0.5);
     printf("\n area of primeter %f",2*pi*r);
     printf("\n area of rectangle  %f ",r*b);
     getch();
     }