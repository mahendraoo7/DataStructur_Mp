#include <stdio.h>
#define n 5
int a[n], top = -1,ch,data;

int insertEnd()
{

    printf("Enter Value to Insert :- \n");
    scanf("%d",&data);
    if (top >= n - 1)
    {
        printf("stack is overflow\n");
    }
    else
    {
        top++;
        a[top] = data;
    }
}
int delete()
{
    if (top < 0)
    {
        printf("stack is underflow \n");
    }
    else
    {
        top--;
    }
}
void first_insert()
{   
    printf("Enter Value Is Insert :- \n");
    scanf("%d",&data);

    if (top >= n - 1)
    {
        printf("stack is overflow \n");
    }
    else if (top<0)
    {
        top++;
        a[top] = data;
    }else
    {
        top++;
        for(int i = top; i >=0; i--)
        {
            a[i]=a[i-1];
        }
        a[0]=data;
    }
}
void first_delete()
{
    if (top < 0)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        for (int i = 0; i < top; i++)
        {
            a[i] = a[i + 1];
        }
        top--;
    }
}

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d\t", a[i]);
    }
}

int main()
{
    printf("\nPress 1 to insert at the end of the stack.\n");
    printf("Press 2 to delete from the stack.\n");
    printf("Press 3 to display the stack.\n");
    printf("Press 4 to frist insert \n");
    printf("Press 5 to frist delete \n");
    printf("Press 0 to exit.\n");
    printf("\nEnter your value: ");

    do
    {
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insertEnd();
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            first_insert();
            break;

        case 5:
            first_delete();
            break;

        case 0:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Please enter a valid value\n");
            break;
        }

    } while (ch != 0);

    return 0;
}