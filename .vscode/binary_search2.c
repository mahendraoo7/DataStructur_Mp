
#include <stdio.h>
#include <stdlib.h>


int binarySearch(int arr[], int l, int r, int x)
{	
	while (l <= r) {
		int m = l + (r - l) / 2;

	
		if (arr[m] == x)
			return m;

		
		if (arr[m] < x)
			l = m+1;

		
		else
			r = m - 1;
	}

	
	return -1;
}

int main(void)
{
	int arr[] = {5,10,20,45,50,55,65,70,80,90,100};
	int x;
    printf("Enter element to search\n");
    scanf("%d",&x);
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	
       if(result == -1)
       {
		 printf("Element is not present in array");
       }else  
       {
		 printf("Element is present at possition  %d",result);
       }  
	return 0;
}
