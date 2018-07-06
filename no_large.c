#include<stdio.h>
int main()
{
   int a,b,c,large;
   printf("enter three different values:\n");
   scanf("%d %d %d",&a,&b,&c);
   large=((a>b&&a>c)?a:(b>c)?b:c);
   printf("\n the largest number is:%d",large);
   return 0;
}
