#include <stdio.h>
 #include <stdlib.h>

int n;
void print(int a[])
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
void Quicksort(int a[],int first,int last)
{ 
    int i,j,temp,pivot;

    if(first<last)
    {
        print(a);

        pivot = first;
        i = first, j = last;

        while(i<j)
        { 
            while(a[i]<=a[pivot] && i<last)
            i++;
            while(a[j]>a[pivot])
            j--;

            if(i<j)
            {
                temp =a [i];
                a[i] = a[j];
                a[j] = temp;

            }
        }

        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;


        Quicksort(a,first,j-1);
        Quicksort(a,j+1,last);


        
    }
}

int main()
{
    int a[25],i;

    printf("How many element enter ");
    scanf("%d",&n);

    for(i=0; i<n;i++)
    {
        a[i] = rand()%100+1;
    }

    print(a);
    Quicksort(a,0,n-1);
    printf("\nAfter quick sort :");
    print(a);
}
