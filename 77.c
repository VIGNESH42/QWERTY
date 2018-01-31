#include<stdio.h>
void main()
{
int n,i,fact=1;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
fact=fact*i;
}
printf("the factorial value is %d",fact);
}
