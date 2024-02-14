#include<stdio.h>
int main(){
int n;
double ac[100];

printf("enter number of element");
scanf("%d",&n);

for(int i=0;i<n;++i){
    printf("enter num %d",i+1);
    scanf("%lf",&ac[i]);

}
for(int i=1;i<n;++i){
    if(ac[0] < ac [i]){
        ac[0] = ac[i];
    }
}
printf(" largest number%lf",ac[0]);

return 0;


}