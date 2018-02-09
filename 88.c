#include<stdio.h>
int main()
{
int n1,n2,temp,i;
scanf("%d %d",&n1,&n2);
temp=(n1>n2)?n1:n2;
while(1)
{
if(temp%n1==0 && temp%n2==0)
{
printf(%d",temp);
}
}
}
