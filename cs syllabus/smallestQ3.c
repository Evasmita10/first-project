/*write a  program to find the smallest or greatest of three numbers given as input*/

#include<stdio.h>
int main()
{
  int n1,n2,n3;
  printf("Enter the three numbers:");
  scanf("%d%d%d",&n1,&n2,&n3);
  if(n1<n2 && n1<n3)
{
    printf("\n%d is the smallest",n1);
}
  else if(n2<n3){
    printf("\n%d is the smallest",n2);
}
else{
    printf("\n%d is the smallest",n3);
}
if(n1>n2 && n1>n3){
     printf("\n%d is the greatest",n1);
}
else if(n2>n3){
     printf("\n%d is greatest",n2);
}
else{
     printf("\n%d is the greatest",n3);
}

return 0;
}