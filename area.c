//calculate the area of a triangle
#include<stdio.h>
#include<math.h>
   int main()
{ 
  int a,b,c;
  float area,s;
   printf("input length of three sides of triangle:");
   scanf("%d %d %d", &a,&b,&c);
   s=(a+b+c)/2.0;
   area=sqrt((s)*(s-a)*(s-b)*(s-c));
   printf("area of the triangle is %f",area);
   return 0;
}