/*Write a program to compute the factors of a given number*/
#include<stdio.h>
int main(){
   int num,i;
   printf("enter a number:");
   scanf("%d",&num);
   printf("Factors of %d are:");
   for(i=1;i<=num;++i)
   {
    if(num%i==0){
        printf("%d",i)

    }
   }
return 0;
}