#include<stdio.h>
void main()
{
char a[10];
int i,n;
scanf("%d",&n);
printf("enter the values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
if(i==(n%2))
{
printf("*");
}
else
{
printf("%d\n",a[i]);
}
}
