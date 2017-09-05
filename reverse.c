#include <stdio.h>
void main()
{
    int n, re= 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n%10;
        re= re*10 + remainder;
        n /= 10;
    }

    printf("Re Number = %d", re);

    
}
