#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next;
};
struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if(head == NULL){
        head = temp;
        temp->next=head;
        return;
    }
    while(ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next =head;
    return;
}
void display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("\n list is empty...");
    }
    else{
        while (ptr->next != head)
        {
             printf("%d ",ptr->data);
             ptr = ptr -> next;
        }   
         printf("%d ",ptr->data); 
    }
    printf("\n");
}
void deleteEnd()
{
    struct node *ptr = head;
    struct node *prev;
    if(head == NULL)
    {
        printf("list is alredey empty....");

    }else if(head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr->next != NULL)
    {
        prev =ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);
    return;
}
int main ()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);

    display();
    deleteEnd();
    


}