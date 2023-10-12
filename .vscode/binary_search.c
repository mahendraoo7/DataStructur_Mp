#include <stdio.h>
#include <stdlib.h>

 int binary_search()
{
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int i,l,element,mid,h;
 
    printf("Enter element\n");
    scanf("%d",&element);
    l=10;
    h=0;
    mid = h+l/2;

    if(mid==element)
     {
        if(element==a[mid])
        {
            printf("its same ");
        }
      printf("%d",a[mid-1]);
        
     }else
     if(a[mid]>element){

        
        if(element==a[mid-1])
        {
            printf("its same ");
        }

        
     }else
     if(a[mid]<element)
     {
         if(element==a[mid])
        {
            printf("its same ");
        }


     }else{

        printf(" Data not found ");

     }
    

}

int main ()
{
    binary_search();
}