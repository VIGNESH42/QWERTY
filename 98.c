#include<stdio.h>
void main()
{
int i,a[10],n;
printf("enter the range");
scanf("%d"&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0,i<n;i++)
{
if(i!=a[i])
{
printf("change number is %d",i);
}
}
