#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};
void display(struct node *temp);

void main()
{
    struct node *temp, *head, *newnode, *printptr , *tail;
    int choiceOfUser = 1 , size = 0;
    head = NULL;
    temp = NULL;
    tail = NULL;
    printf("Do you want to insert a new node?\nyes-> 1\nno-> 0\n");
    scanf("%d" , &choiceOfUser);
    while(choiceOfUser !=0){
        newnode = (struct node *)malloc(sizeof(struct node)); // this will us a memory address where we can add a node and the next address value.
        printf("Enter the value of the node.->  ");
        scanf("%d", &newnode -> value);
        
        newnode -> next = NULL;
        tail = newnode;
        if (head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
       printf("Do you want to insert a new node?\nyes-> 1\nno-> 0\n");
        scanf("%d" , &choiceOfUser);
    }

    display(head);
    
}


void display(struct node *temp)
{
 while (temp != NULL){
        printf("%d -> ", temp->value);
        temp = temp -> next;
    }
    printf("NULL");
}