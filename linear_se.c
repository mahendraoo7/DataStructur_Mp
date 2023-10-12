
#include <stdio.h> 
#include <stdlib.h>

int i;

int search(int x, int N) 
{ 
	for ( i = 0; i < N; i++) 
		if (rand()%100 == x) 
			return i; 
	return -1; 
} 


int main(void) 
{ 
	int arr;
	int x = 5; 
	int N = sizeof(arr); 


	int result = search( x, N); 
	(result == -1) 
		? printf("Element is not present ") 
		: printf("Element is present at index %d", result); 
	return 0; 
}
