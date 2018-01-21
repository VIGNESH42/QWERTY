#include <stdio.h>
int main()
{
    int i = 33;
    int k = 66;
    printf("before swapping");
    printf(" value of i=%d k=%d", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("afterswapping");
    printf("value of i=%d k=%d ", i, k);

    return 0;
}
