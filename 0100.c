#include<stdio.h>
void main()
{
int a[10],i,s=1,n;
printf("enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
s=s*a[i];
}
printf("the product is %d",s);
}
