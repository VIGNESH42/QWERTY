#include <stdio.h>
void main()
{
    int n1, n2, Multiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    

    minMultiple = (n1>n2) ? n1 : n2;

   

    while(1)
    {
        if( Multiple%n1==0 && Multiple%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, n2,Multiple);
            break;
        }
        ++Multiple;
    }
    

}
