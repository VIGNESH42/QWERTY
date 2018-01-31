#include<stdio.h>
void main()
{
char a[10];
int i,count=0;
printf("enter the sentence");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]==" ")
{
count=count+1;
}
}
printf("the no of words is %d",count);
}
