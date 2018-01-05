 #include<stdio.h>
void main()
{
  int n,nu,i;
  int big;
  
  printf("Enter the values of n: ");
  scanf("%d",&n);
 
  printf("Number %d",1);
  scanf("%d",&big);

  for(i=2;i<=n;i++)
  {
    printf("Number %d: ",i);
    scanf("%d",&nu);

    if(big<nu)
      big=nu;
  }
  
  printf("Largest number is: %d",big);

  
}
