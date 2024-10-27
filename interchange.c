//Interchange two numbers without using third variable
#include<stdio.h>
  int main()
{
  int n1,n2;
  printf("Before interchange n1=%d n2=%d",n1,n2);
  n1=n1+n2;
  n2=n1-n2;
  n1=n1-n2;
  printf("\nAfter interchange n1=%d n2=%d",n1,n2);
 return 0;
}