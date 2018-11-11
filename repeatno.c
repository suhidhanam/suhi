#include <stdio.h>
#include <malloc.h>
 
void duplicate(int array[], int num)
{
    int *count = (int *)calloc(sizeof(int), (num - 2));
    int i;
 
    printf("duplicate elements present in the given array are ");
    for (i = 0; i < num; i++)
    {
        if (count[array[i]] == 1)
            printf(" %d ", array[i]);
        else
            count[array[i]]++;
    }
}
 
int main()
{
    int array[] = {1,2,3,2,3,4,3};
    int array_freq = sizeof(array) / sizeof(array[0]);
    duplicate(array, array_freq);
    getchar();
    return 0;
}
