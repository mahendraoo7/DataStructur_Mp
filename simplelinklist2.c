#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->next = head;
}

void insertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->next = head;
    head = temp;
}

void insertMid(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    while (ptr->data != pos)
    {
        ptr = ptr->next;
    }

    temp->next = ptr->next;
    ptr->next = temp;
}

void deleteEnd()
{
    struct node *ptr = head;
    struct node *prev;

    if (head == NULL)
    {
        printf("List is already empty....");
        return;
    }

    while (ptr->next != head)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = head;
    free(ptr);
}

void deleteFirst()
{
    struct node *ptr = head;
    struct node *temp;

    if (head == NULL)
    {
        printf("List is already empty....");
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    temp = head;
    head = head->next;
    ptr->next = head;
    free(temp);
}

void deleteMid(int pos)
{
    struct node *ptr = head;
    struct node *prev;

    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = ptr->next;
    free(ptr);
}

void display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is empty....");
        return;
    }

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);

    printf("\n");
}

int main()
{
    int choice, value, position;

    while (1)
    {
    
        printf("1. Insert end  \n");
        printf("2. Delete end  \n");
        printf("3. Insert frist\n");
        printf("4. Delete frist\n");
        printf("5. Insert mid  \n");
        printf("6. Delete mid  \n");
        printf("7. Display     \n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertEnd(value);
                break;

            case 2:
                deleteEnd();
                break;

            case 3:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertFirst(value);
                break;

            case 4:
                deleteFirst();
                break;

            case 5:
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertMid(value, position);
                break;

            case 6:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                deleteMid(position);
                break;

            case 7:
                display();
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid choice.\n");
                exit(0);
        }
    } 
    return 0;
}