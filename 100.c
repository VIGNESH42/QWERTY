#include<stdio.h>
void main()
{
int n,i,rem,r=1;
printf("Enter a Number");
scanf("%d",&n);
while(n!='\0')
{
rem=n%10;
r=rem*r;
n=n/10;
}
printf("%d",r);
}
