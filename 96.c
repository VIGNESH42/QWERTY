#include<stdio.h>
int main()
{
int i,num,flag=0;
printf("enter the value to check");
scanf("%d",&num);
for(i=0;i<num/2;i++)
{
if(((num%num)==0)&&((num%1)==0))
{
flag=0;
}
else
{
flag=1;
}}
if(flag==1)
{
printf("composite");
}
else
{
printf("prime");
}
}
