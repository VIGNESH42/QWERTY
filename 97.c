
#include<stdio.h>
void main()
{
int num,i,a=0;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
i=num%10;
a=a*10+i;
num=num/10;
}
printf(" the reverse number is %d",a);
}
