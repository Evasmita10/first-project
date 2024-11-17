/*program in which a function is passed address of two variables and then alter its contents*/
#include<stdio.h>
 void alter(int *a,int *b)
 {
    *a=*a * *a;
    *b=*b * *b;
 }
 int main()
 {
     int a=3,b=5;
     printf("\nInitial value of a=%d,b=%d\n",a,b);
     alter(&a,&b);
     printf("\n altered value of a =%d,b=%d\n",a,b);
 }
 