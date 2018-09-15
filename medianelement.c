#include <stdio.h>
void swap(int *p,int *q) {
   int t;
    t=*p; 
   *p=*q; 
   *q=t;
}
void sort(int a[],int n) { 
   int i,j,temp;
   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(a[j] > a[j+1])
            swap(&a[j],&a[j+1]);
      }
   }
}
int main() 
{
   int a[] = {2,1,3};
   int n = 3;
   int sum,i;
   sort(a,n);
   n = (n+1) / 2 - 1;      
   printf("Median = %d ", a[n]);
   return 0;
}
