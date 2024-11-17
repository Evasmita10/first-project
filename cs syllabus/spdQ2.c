/*write a program to take input of three numbers and print their sum,product and difference*/
 
#include<stdio.h>
int main()
{
   int n1,n2,sum,product,difference;
   printf("Enter the first number:");
   scanf("%d",&n1);
   printf("Enter the seconf number:");
   scanf("%d",&n2);
          sum=n1+n2;
          product=n1*n2;
          difference=n1-n2;
   printf("sum:%d\n",sum);
   printf("product:%d\n",product);
   printf("difference:%d\n",difference);

 return 0;
}