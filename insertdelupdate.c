#include<stdio.h>

int main(){
int a[20],n,i,newvalue,position;

printf("enter size of array");
scanf("%d",&n);

printf("\n enter element");

for(i=0;i<n;i++){
  scanf("%d",&a[i]);

}

printf("\n old array");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  
}
printf("\n enter new element");
scanf("%d",&newvalue);
a[n]=newvalue;
n++;


printf("\n after insert");
for(i=0;i<n;i++){
  printf("%d",a[i]);
  
}

n--;

printf("\n after delete array");
for(i=0;i<n;i++){
  printf("%d",a[i]);
  
}

printf("\nenter position");
scanf("%d",&position);

printf("\nenter new element");
scanf("%d",&newvalue);


for(i=0;i<n;i++){
if(i==position){
  a[i]=newvalue;
}
  
}

printf("\nafter update");
for(i=0;i<n;i++){
  printf("%d",a[i]);
  
}

  return 0;  
}