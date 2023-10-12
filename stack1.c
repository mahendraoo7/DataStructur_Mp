#include <stdio.h>
#define n 5
int a[n], top = -1,ch,data;

int insertEnd()
{

    printf("Enter Value to Insert :- \n");
    scanf("%d",&data);
    if (top >= n - 1)
    {
        printf(" Stack Is overflow  \n");
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
        printf("stack is underflow\n");
    }
    else
    {
        top--;

        printf("%d",a[top]);
        printf("value deleted\n");

        
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
    printf("\n press 1 for  insert  \n");
    printf("\n press 2 for  delete  \n"); 
    printf("\n press 3 for  display \n");
    printf("\n Enter value \n");
  do
  {
    
    scanf("%d",&ch);

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
     
    case 0:
        printf("exit"); 
        return 0;
        
    default:
    printf("Enter The Valide value ");
        break;
    }

  } while(ch!=0);

}