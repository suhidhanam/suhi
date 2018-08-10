#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    int result;
    printf("\nenter the value of a base:");
    scanf("%d",&x);
    printf("\nenter the value of the power:");
    scanf("%d",&n);
    result=pow((double)x,n);
    printf("%d \nto the power of %d is=%d",x,n,result);
    //getch();
    return 0;
}
