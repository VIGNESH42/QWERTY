#include <stdio.h>
#include <string.h>
void main()
{
    char a[20], b[20];
    printf("\nEnter first string: ");
    gets(a);
    printf("\nEnter second string: ");
    gets(b);
    strcat(a, b);
    printf("\nThe concatenated string is: %s", a);
    getch();
}
 
