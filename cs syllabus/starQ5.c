/*write a program to print a triangle of star as follows*/
#include<stdio.h>
int main()
{
    int lines,blank,star,i;
    printf("input No. of lines");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        for(blank=1;blank<lines-i+1;blank++)
        printf(" ");
    for(star=1;star<=2*i-1;star++)
    printf("*");
    printf("\n");
    }
    return 0;
}