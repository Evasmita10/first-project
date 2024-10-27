//calculate average of 5 numbers
#include<stdio.h>
int main()
{
  float n1,n2,n3,n4,n5,Avg;
  printf("Enter the first number:");
  scanf("%f",&n1);
  printf("Enter the second number:");
  scanf("%f",&n2);
  printf("Enter the third number:");
  scanf("%f",&n3);
  printf("Enter the fourth number:");
  scanf("%f",&n4);
  printf("Enter the fifth number:");
  scanf("%f",&n5);
  Avg=n1+n2+n3+n4+n5/5;
  printf("The average of the number is:%f\n",Avg);
return 0;
}