/*Print the even valued elements*/
#include<stdio.h>
void print_even (int a[],int n);
{
    int i;
    printf("\n Even values elements are:");
    for(i=0;i<n;i++)
    {
        if (a[i]%2==0);
        printf("%d",a[i]);
    }
    int main()
    {
        int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}
        print_even(a,15);
        return 0;
    }
}