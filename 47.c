#include<stdio.h>
int main()
{
int a[5],t,i,v;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
t=a[0];
for(i=0;i<5;i++)
{
if(a[0]>a[i])
{
t=a[i];
}
}
printf("the smallest value is %d",t);
v=a[0];
for(i=0;i<5;i++)
{
if(a[0]<a[i])
{
v=a[i];
}
}
printf("the largest value is %d",v);
}
