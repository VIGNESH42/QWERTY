#include<stdio.h>
int main()
{
float ts,vol,l,b,w;
printf("Enter the Breadth , length , Width Respectively : ");
scanf("%f\t%f\t%f",&b,&l,&w);
ts=(2*(l*b+l*w+b*w));
vol=(l*b*w);
printf("\nTotal Surface Area of a Cuboid : %f",ts);
printf("\nVolume of a Cuboid : %f",vol);
}
