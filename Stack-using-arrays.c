#include <stdio.h>
#include <stdlib.h>
 
#define MAX 4
 
int stack[MAX],TOP;

void display(int []);
 
void push(int []);
 
void pop (int []);
 
void main()
{
    int item=0;
    int op=0;
    TOP=-1;
 
    while(1)
    {
        printf("Menu \n1: display\n2: insert\n3: remove\n4: Exit\nEnter Choice: ");
        scanf("%d",&op);
 
        switch(op)
        {
            case 1:
                display(stack);
            break;
            case 2:
                push(stack);
            break;
            case 3:
                pop(stack);
            break;
            case 4:
                exit(0);
            default:
            printf("\nInvalid choice.");
            break;
        }
    
    }// end of while
 
}
 
void display(int stack[])
{
    int i=0;
    if(TOP==-1)
    {
        printf("Stack is Empty .\n");
        return;
    }
 
    printf("%d <-- TOP ",stack[TOP]);
    for(i=TOP-1;i >=0;i--)
    {
        printf("\n%d",stack[i]);
    }
    printf("\n\n");
}
 
void push(int stack[])
{
    int item;
    if(TOP==MAX-1)
    {
        printf("\nSTACK is FULL CAN't ADD ITEM\n");
        return;
    }
    printf("Enter Item to be insert: ");
    scanf("%d",&item);
    TOP++;
    stack[TOP]=item;
}
 
void pop(int stack[])
{
    int delItem;
    if(TOP==-1)
    {
        printf("STACK is EMPTY.\n");
        return;
    }
 
    delItem=stack[TOP];
    TOP--;
    printf("%d deleted successfully\n",delItem);
    return;
}
