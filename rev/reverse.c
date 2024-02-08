#include<stdio.h>

int main(){

int r,n,rev=0;
printf("enter number");
scanf("%d",&n);

while(n>0){
r=n%10;
rev = (rev*10)+r;
n=n/10;



}

printf("\n reverse no is %d",rev);


    return 0;
}