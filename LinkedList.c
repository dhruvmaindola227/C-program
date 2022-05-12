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
    struct node *temp, *head, *newnode, *printptr;
    int choiceOfUser = 1;
    head = NULL;
    temp = NULL;
    for(int i = 0 ; i < 5 ; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node)); // this will us a memory address where we can add a node and the next address value.
        printf("Enter the value of the node.->  ");
        scanf("%d", &newnode -> value);
        newnode -> next = NULL;
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