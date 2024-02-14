#include<stdio.h>

int main(){

int a[100],i,n;

printf("enter size");
scanf("%d",&n);

printf("enter num of elemet");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);

}
printf(" negative element is");

for(i=0;i<n;i++){
    if(a[i]<0){
        printf("%d\t",a[i]);
    }




}
    return 0;
}