#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character:\n");
    scanf("%c",&ch);
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
    {
        printf(" it is an alphabet",ch);
    }
    else
     printf("it is not an alphabet",ch);
}
