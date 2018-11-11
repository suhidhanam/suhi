#include <stdio.h>
void main()
{
        int num[50];
       int nelem, i;
       printf("Enter number of array elements: ");
       scanf("%d", &nelem);
       printf("Enter array elements:\n");
       for (i = 0; i < nelem; i++)
           scanf("%d", &num[i]);
           printf("Array elements in reverse order:\n");
        for (i = nelem - 1; i >= 0; i--)
           printf("%d ", num[i]);
           printf("\n");
}
