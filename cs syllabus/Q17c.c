/*calculat and print the sum and average of the elements of array */
#include<stdio.h>
void cal_sum_avg(int a[],int n)
{
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++)
    sum=sum+a[i];
avg= (float)sum/n;
printf("\nsum+%d average=%f",sum,avg);
}
int sum()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}
    print_sum_avg(a,15);
    return 0;

}