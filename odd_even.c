#include<stdio.h>
void main()
{
    int num;
    printf("enter a integer:\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d number is even",num);
    }
    else
    printf("%d number is odd",num);
}
