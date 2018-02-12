

#include<stdio.h>
int main()
{
int  a[10],n,i,k;
printf("enter the n and k value");
scanf("%d %d",&n,&k);
printf("enter the values");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);

}
for(i=1;i<=n;i++)
{
if(i==k)
{
printf("%d",a[i]);
}
}
}
