#include <stdio.h>
#include <string.h>
void swap(int*, int *);
 
void main()
{
    int n1, n2;
    printf("\nEnter two nbers:");
    scanf("%d %d", &n1, &n2);
    printf("\nThe nbers before swapping are nber1= %d nber2 = %d", n1, n2);
    swap(&n1, &n2);       
    printf("\nThe nbers after swapping are nber1= %d nber2 = %d", n1, n2);
}
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
