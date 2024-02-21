#include<stdio.h>
#include<string.h>
int main(){

char str[50],str2[50];
int len ;
printf("enter name");
scanf("%s",str);
//gets(str);

printf("enter name");
scanf("%s",str2);
//gets(str);


printf("\n your name is %s",str);
//puts(str);

len = strlen(str);
printf("\n lenght is %d", len);

//printf("\n reverse is %s",strrev(str));
//printf("\n uppercase  is %s",strupr(str));
//printf("\n lowercase  is %s",strlwr(str));

//strcpy(str2,str);
//printf("\ncopy string is %s",str2);

//strcat(str,str2);
//printf("\n merge string is %s",str);


len=strcmp(str,str2);
printf("\n comaprision is %d",len);

if(len ==0){
    printf("string match");
}else{
    printf("string not match");
}

return 0;

}