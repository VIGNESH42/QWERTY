
#include<stdio.h>
void main()
{
char a[10],d;
int i,n,c;
scanf("%d",&n);
printf("enter the values");
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
}
c=n/2;
d='*';
for(i=0;i<n;i++)
{
if(i==c)
{
a[i]=d;
}
}
for(i=0;i<n;i++)
{
    printf("%c",a[i]);
}
}
