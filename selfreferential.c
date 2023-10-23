//  self referential node 

#include <stdio.h>

struct node 
{
    int data;
    char ch;
    struct node *ptr;
};

int main ()
{
    struct node a,b,c;


    a.data = 65;
    a.ch = 'A';
    a.ptr = NULL;
  
    b.data = 97;
    b.ch = 'B';
    b.ptr = NULL;


    a.ptr = &b;
    b.ptr = &a;


    printf("\n A data :%d char :%c ",b.ptr->data,b.ptr->ch);

    printf("\n B data :%d char :%c ",a.ptr->data,a.ptr->ch);






}