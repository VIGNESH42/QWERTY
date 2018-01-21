#include<stdio.h>
int main()
{
int n;
printf("enter anumber");
scanf("%d",&n);
if(n%2!=0)
{
n=n-1;
printf("the nearest even number is %d",n);
}
else
{
n=n-2;
printf("the nearset even number is %d",n);
}
}
