#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next;
   struct node *prev;
};
struct node *head = NULL;

void insertEnd(int val)
{
    printf("enter val");
    scanf("%d",&val);
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;


    if(head == NULL){
        head = temp;
        return;
    }
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    return;
}
void deleteEnd()
{
    struct node *ptr = head;
    struct node *p;
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
        p =ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}
void delete_first()
{
    struct node *ptr = head;

    if(head == NULL)
    {
        printf("list is alredey empty....");

    }else if(head->next == NULL)
    {
        head = ptr->next;
        free(ptr);
        return;
    }
    
}
void display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("\n list is empty...");
    }
    else{
        while (ptr != NULL)
        {
            printf("%d\t",ptr->data);
            ptr = ptr -> next;
        }   
    }
    printf("\n");
}
int main()
{
    int ch=0, data, val;
    do
    {
        
    
        printf("Press 1 For insertEnd \n");
        printf("Press 2 For DeleteEnd \n");
        printf("Press 3 For Delete_first \n");
        printf("Press 4 for Display \n");
        printf("Press 0 for EXIT \n");

        printf(" Enter Number \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insertEnd(val);
            break;

        case 2:
            deleteEnd();
            break;

        case 3:
            delete_first();
            break;
        case 4:
            display();
            break;
    

        case 0:
            printf("\n Exit \n");
            break;

        default:
            printf("Try Again ");
            break;
        }
    } while (ch != 0);
    return 0;
}