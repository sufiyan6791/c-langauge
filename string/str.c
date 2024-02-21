#include<stdio.h>

int main(){

char str[50];
printf("enter name");
//scanf("%s",str);
gets(str);

printf("\n your name is ");
puts(str);




return 0;

}