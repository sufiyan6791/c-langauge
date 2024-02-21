#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rep_char,new_char;
    printf("\n enter name");
    gets(str);

    printf("enter replace character");
    scanf("%c ",&rep_char);

    printf("enter new character");
    fflush(stdin);
    scanf("%c ",&new_char);
    for(int i=0;str[i]|='\0';i++){
        if (str[i] == rep_char)
        {
            str[i]=new_char;
        }
        

    }
    printf("\n new string is %s",str);
    return 0;
}