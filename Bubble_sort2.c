#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int a[], int n) {  
  int i, j;  
  for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - i - 1; j++) {  
      if (a[j] > a[j + 1]) {  
        int temp = a[j];  
        a[j] = a[j + 1];  
        a[j + 1] = temp;  
      }  
    }  
  }  
}  
int main() {  
  int a[10]; 

    for(int i=0;i<=9;i++)
    {
       a[i]=rand()%100;
       printf("%d ",a[i]);
    }
  int n = sizeof(a) / sizeof(a[0]);  
  bubble_sort(a, n);  
  printf("\n #_Sorted array_#:\n ");  
  for (int i = 0; i < n; i++) {  
    printf("%d ", a[i]);
  }  
  return 0;  
} 