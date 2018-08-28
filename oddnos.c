#include<stdio.h>
void main()
{
    int num,m=10,n=20;
    printf("enter the odd numbers in the given range m to n:\n");
    for(num=m;num<=n;num++)
    {
        if(num%2==1)
        printf("%d\n",num);
    }
}
