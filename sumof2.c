#include<stdio.h>
int main(){
int r,c,a[100][100],b[100][100],sum[100][100],i,j;

printf("number of row");
scanf("%d",&r);
printf("number of coloum");
scanf("%d",&c);

printf("enter elemrnt of 1st matric\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j){
printf("enter element a %d %d  ",i+1,j+1);
scanf("%d ",&a[i][j]);
}

printf("enter elemrnemt 2 matrixs\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j){
printf("enter element b %d %d ",i+1,j+1);
scanf("%d ",&b[i][j]);
}

for(i=0;i<r;++i)
for(j=0;j<c;++j){

sum[i][j] =a [i][j] + b[i][j];

}


printf("sum of two matrics \n");
for(i=0;i<r;++i)
for(j=0;j<c;++j){
printf("%d",sum[i][j]);
if(j==c-1){
    printf("\n");
}
}


    return 0;
}