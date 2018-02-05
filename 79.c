#include<stdio.h>
void main()
{
    int i,n,m,t;
    scanf("%d %d",&n,&m);
    t=n*m;
    if(n==m)
    {
        printf("%d is perfect square",t);
    }
    else
    {
        printf("%d is not a perfect square",t);
        
    }
    
}
