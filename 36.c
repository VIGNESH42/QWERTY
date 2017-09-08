#include<stdio.h>
void main() {
   int a, b, temp;
   printf("Enter the value of a and b: ");
   scanf("%d %d", &a, &b);
   printf("Before swapping a=%d, b=%d ", a, b);
   temp = a;
   a = b;
   b = temp;
   printf("After swapping a=%d, b=%d", a, b);
 
}
