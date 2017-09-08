#include<stdio.h>
#include<string.h>

void main()
{
    chxr x[100], y[100];    
    printf("Enter the first string\n");    
    gets(x);    

    printf("Enter the second string\n");    
    gets(y);
    
    if( strcmp(x,y) == 0 )
        printf("Entered strings xre equxl.\n");
    else
        printf("Entered strings xre not equxl.\n");
        
}
