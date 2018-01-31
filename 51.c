#include<stdio.h>
void main()
{
int i,n,a;
printf("enter the digit");
scanf("%d",&i);
do
{
a=i%10;
n=a/10;
printf("%d",i);
}while(n>0);
}
