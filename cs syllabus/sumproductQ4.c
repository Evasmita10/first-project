#include<stdio.h>
int main(){
    int num,s,p;
    printf("Enter the numbers:");
    scanf("%d",&num);
    for(s=0,p=1;num!=0;num=num/10)
      s=s+num%10;
       p=p*(num%10);

 printf("sum of digits=%d\n",s);
 printf("product of digits=%d\n",p);
 return 0;
 }