#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<string.h>
void main()
{
char x[10],y[10];
gets(x);
strcpy(y,x);
strrev(x);
if(strcmp(x,y)==0)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
