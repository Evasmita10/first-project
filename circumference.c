//calculate area and circumference of a circle
#include<stdio.h>
#define pi 3.14415
int main() {
  float radius,area,cir;
  printf("Enter the radius of the circle:");
  scanf("%f",&radius);
  area=pi*radius*radius;
  cir=2*pi*radius;
  printf("Area of the circle:%f\n",area);
  printf("cir of the circle:%f\n",cir);
 return 0;
}