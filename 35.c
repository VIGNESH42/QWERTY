#include <stdio.h>
 
int main()
{
    char    str[100];
    int Digits,Alphabet,SpecialChar,Spaces;
    int counter;
    Digits=Alphabet=SpecialChar=Spaces=0;
 
    printf("Enter a string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            Digits++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            Alphabet++;
        else if(str[counter]==' ')
            Spaces++;
        else
            SpecialChar++;
    }
 
    printf(" %d \nSpecial Characters: %d",SpecialChar);
 
    return 0;
}
