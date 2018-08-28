#include<stdio.h>
int main()
{
    int counter;
    printf("even numbers between 1 to 10\n");
    counter=2;
    while(counter<10)
    {
        printf("%d\n",counter);
        counter=counter+2;
    }
    return 0;
}
