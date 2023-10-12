#include <stdio.h>

#define n 5
int a[n], top = -1;

int intsertEnd(int data)
{
    if(top>= n-1){
        printf("stack is overflow");

    }else 
    {
        top++;
        a[top]=data;
    }
}
int delete (){
    if(top<0){
       
       printf(" stack underflow");
    
    }else{
    
    
      top--;

    }
    
}

int display(){
    for(int i=0;i<=top;i++){

        printf("%d ",a[i]);
        
    }
    printf("\n");
} 

int main (){

    int y;

 
    printf("Press 1 to insert \n");
    printf("Press 2 to delete \n");
    printf("Press 3 to to display\n");
    printf("Press 0 to exit\n");

    scanf("%d",&y);
    

    switch(y){
        
        case 1:
        intsertEnd(y);
        break;

        case 2:
        delete();
        break;

        case 3:
        display();
        break;

        case 0:
        break;

        dafualt:
        break;

        
      
    }

       intsertEnd(10);
       intsertEnd(20);
       intsertEnd(30);
       intsertEnd(40);
       intsertEnd(50);


       display();
}