#include<stdio.h>

int main(){
int i,j,row,col,a[10][10],sum=0,anti=0;
printf("enter row and col");
scanf("%d %d",&row,&col);

printf("\n element");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("\n matrix is \n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    
        printf("%d ",a[i][j]);
    }
    printf("\n");
}


for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    if(i==j){
        sum=sum+a[i][j];
    }
    }
   printf("\n");
}
    
   printf("sum is %d",sum) ;


printf("\n----------------------------------\n");


printf("enter row and col");
scanf("%d %d",&row,&col);

printf("\n element");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("\n matrix is \n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    
        printf("%d ",a[i][j]);
    }
    printf("\n");
}


for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    if(i+j==2){
        anti=anti+a[i][j];
    }
    }
   printf("\n");
}
    
   printf("sum is antidiognal %d",anti) ;



return 0;
}



