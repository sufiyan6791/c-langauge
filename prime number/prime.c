#include<stdio.h>

int main(){

int i=1,n,count=0;

printf("enter number ");
scanf("%d",&n);
while(i<=n){
    if(n%i==0){
        count++;
    }
i++;
}
if(count==2){
    printf("this is prime number");
}else{
printf("this is not a prime number");
}




}
