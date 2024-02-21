#include<stdio.h>
#include<string.h>

int main (){
char str[100],rev_str[100];

printf("enter a string");
gets(str);
strcpy(rev_str,str);
printf("str is %s",strrev(rev_str));

if(strcmp(str,rev_str)==0){
printf("\n string is palimdrome ");
}else{
printf("\n string is not palimdrome");


}
return 0;
}