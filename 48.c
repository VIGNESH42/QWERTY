#include<stdio.h>
int main()
{
int n a[n],sum=0,aver=0;
printf("enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
aver=sum/n;
printf("the sum is %d",sum);
printf("the average is %d",aver);
}
