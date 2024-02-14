#include<stdio.h>

int main(){
int i,j,a[10][10],t[10][10], r,c;
printf("enter row");
scanf("%d",&r);

printf("enter coloum");
scanf("%d",&c);
for(i=0;i<r;++i)
for(j=0;j<c;++j){
    printf("enter element");
    scanf("%d",&a[i][j]);
}

printf("\nenter matrix\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j){
    printf("%d",a[i][j]);
    if(j==c-1)
    printf("\n");
}

for(i=0;i<r;++i)
for(j=0;j<c;++j){
    t[j][i]=a[i][j];
}

printf("\n transpose\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j){
    printf("%d",t[i][j]);
    if(j==r-1){
        printf("\n");
    }
}





    return 0;}