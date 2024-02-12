#include<stdio.h>
int main() {
    int i,j;
for(int i=41;i<=45;i++){
   for(int j=41;j<=45;j++) {
   if(j<=i){
       printf("%d ",j);
   }
}
printf("\n");
    
}
    return 0;
}