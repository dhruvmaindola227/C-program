#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};
struct node *head , *node , *tail = NULL;
 //global pointers.
int size = 0;
void display();
struct node* getNode(int location);
void enqueue(int value); //works like insertAtLast()
void dequeue(); //works like deleteAtBeginning()
void peek();
void main(){
    int userChoice = 0;
    int value;
    printf("Creating the first element in queue\nEnter the value");
    node = (struct node*) malloc(sizeof(struct node));
    scanf("%d" , &node -> value);
    node -> next = node;
    head = node;
    tail = head;
    size++;
    printf("Press 1 to insert\nPress 2 to delete\nPress 3 to display\nPress 4 to peek\nPress 5 to quit\n");
    scanf("%d" , &userChoice);
    while(userChoice < 6 && userChoice > 0){
        if(userChoice == 1){
            printf("Enter the value for the element...\n");
            scanf("%d" , &value);
            enqueue(value);
        }
        else if(userChoice == 2){
            dequeue();
        }
        else if(userChoice == 3){
            display();
        }
        else if(userChoice == 4){
            peek();
        }
        else if(userChoice == 5){
            return;
        }
        printf("Press 1 to insert\nPress 2 to delete\nPress 3 to display\nPress 4 to peek\nPress 5 to quit\n");
         scanf("%d" , &userChoice);
        
    }
}

void enqueue(int value){
    node = (struct node*) malloc(sizeof(struct node));
    node -> value = value;
    tail -> next = node;
    tail = node;
    node -> next = head;
    size++;
}

void dequeue(){
    if(size == 0){
    printf("Queue is Empty!");
    }
    tail -> next = head -> next;
    free(getNode(1));
    head = tail -> next;
    size--;
}

void display()
{   
    struct node *temp = head;
    do {
        printf("%d -> ", temp->value);
        temp = temp -> next;
    }while (temp != head);
    printf("HEAD\nSize of list =  %d \n\n" , size);
}

void peek(){
    printf("The front value is %d -> " , head -> value);
}

struct node* getNode(int location){
    struct node *temp = head;
    for (int i = 1; i < location; i++)
    {
        temp = temp -> next;
    }
    return temp;

}