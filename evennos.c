#include<stdio.h>
int main()
{
    int a1,a2,rem,i;
    printf("enter the first number: \n");
    scanf("%d",&a1);
    printf("enter the final number: \n");
    scanf("%d",&a2);
    printf("the even numbers between %d and %d are",a1,a2);
    for(i=a1;i<a2;++i)
    {
        rem=i%2;
        if(rem==0)
        printf("\n%d",i);
    }
    return 0;
}
