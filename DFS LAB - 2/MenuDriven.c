#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};
struct node *head , * node , * tail = NULL;
 //global pointers.
int size = 0;
void display(s);
void insertAtBeginning(int value);
void insertAtLast(int value);
void insertAtPosition(int pos , int value);
void deletetAtBeginning();
void deleteAtLast();
void deleteAtPosition(int pos);
void reverse();
void recursiveReverse(struct node *currnode);
int searchValue(int value);// returns the position of the value in the linkedlist.
void main(){
    int choiceOfUser = 1;
    int valueToSearch = -1;
    int nextChoice = 0;
    int position = 0;
    int value;
    printf("Creating the first node...\nEnter the value for the first node. ->  ");
    node = (struct node*) malloc(sizeof(struct node));
    scanf("%d" , &node -> value);
    node -> next = NULL;
    head = node;
    tail = head;
    size++;
    printf("What do you want to do?\n1 -> Insertion\n2 -> Deletion\n3 -> Display\n4 -> Search\n5 -> Reverse\n6 -> Quit\n");
    scanf("%d" , &choiceOfUser);
    while(choiceOfUser <= 5){
    if(choiceOfUser == 6){
        return;
    }
    else if (choiceOfUser == 5){
        // reverse();
        recursiveReverse(head);
        display();
    }
    else if(choiceOfUser == 4){
        printf("What is the value that you want to search? ->  ");
        scanf("%d" , &valueToSearch);
        printf("The value %d was found at position number %d\n" , value , search(valueToSearch));
    }
    else if(choiceOfUser == 3){
        display();
    }
    else if(choiceOfUser == 1){
        printf("Press 1 for inserting a node at beginning\nPress 2 for inserting a node at ending\nPress 3 for inserting a node at a particular index  ");
        scanf("%d" , &nextChoice);
        if(nextChoice == 1){
            printf("Enter the value for the node.");
            scanf("%d" , &value);
            insertAtBeginning(value);
        }
        else if(nextChoice == 2){
            printf("Enter the value for the node.");
            scanf("%d" , &value);
            insertAtLast(value);
        }
        else{
            printf("Enter the position where you want to insert the node.");
            scanf("%d" , &position);
            printf("Enter the value for the node.");
            scanf("%d" , &value);
            insertAtPosition(position , value);
        }
    }
    else{
        printf("Press 1 for deleting a node at beginning\nPress 2 for deleting a node at ending\nPress 3 for deleting a node at a particular index");
        scanf("%d" , &nextChoice);
        if(nextChoice == 1){
            deleteAtBeginning();
        }
        else if(nextChoice == 2){
            deleteAtLast();
        }
        else{
            printf("Enter the position where you want to delete the node.");
            scanf("%d" , &position);
            deleteAtPosition(position);
        }
    }

    printf("What do you want to do?\n1 -> Insertion\n2 -> Deletion\n3 -> Display\n4 -> Search\n5 -> Reverse\n6 -> Quit\n");
    scanf("%d" , &choiceOfUser);

    }
}


void display()
{
    struct node *temp = head;
 while (temp != NULL){
        printf("%d -> ", temp->value);
        temp = temp -> next;
    }
    printf("NULL\nLength of the linkedlist is %d \n" , size);
    
}

void insertAtBeginning(int value){
    node = (struct node*) malloc(sizeof(struct node));
    node -> value = value;
    node -> next = head;
    head = node;
    size++;
}


void insertAtLast(int value){
    node = (struct node*) malloc(sizeof(struct node));
    node -> value = value;
    tail -> next = node;
    tail = node;
    node -> next = NULL;
    size++;
}

void insertAtPosition(int position , int value){
    if(position == 1){
        insertAtBeginning(value);
        return;
    } 
    if(position == size){
        insertAtLast(value);
        return;
    }

    node = (struct node*) malloc(sizeof(struct node));
    node -> value = value;
    struct node *temp = NULL;
    int position_count = 1;
    temp = head;
    while(position_count < position - 1){
        temp = temp -> next;
        position_count++;
    }
    node -> next = temp -> next;
    temp -> next = node;
    size++;
}

void deleteAtBeginning(){
    struct node *temp;
    temp = head;
    head = head -> next;
    free(temp);
    size--;
}

void deleteAtLast(){
    struct node *temp;
    temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    free(temp -> next);
    tail = temp;
    tail -> next = NULL;
    size--;
}

void deleteAtPosition(int position){
    if(position == 1){
        deleteAtBeginning();
        return;
    } 
    if(position == size){
        deleteAtLast();
        return;
    }
    struct node *temp;
    struct node *nextnode;
    temp = head;
    int positionCount = 1;
    while(positionCount < position - 1){
        temp = temp -> next;
        positionCount++;
    }
    nextnode = temp -> next -> next;
    free(temp -> next);
    temp -> next = nextnode;
    size--;
}

int search(int value){
    struct node *temp = head;
    int position = 1;
    while (temp != NULL)
    {
        if(temp -> value == value){
            return position;
        }
        position++;
        temp = temp -> next;
    }
}


void reverse(){
    if (size < 2) {
            return;
        }
    struct node *present = head;
    struct node * previous  = NULL;
    struct node *nextnode = present -> next;
    while(present != NULL){
        present -> next = previous;
        previous = present;
        present = nextnode;
        if(nextnode != NULL){
            nextnode = nextnode -> next;
        }
    }
    head = previous;
    display();
}

void recursiveReverse(struct node *currnode){
    if (size < 2) {
            return;
        }
    if(currnode == tail){
        head = tail;
        return;
    }
    recursiveReverse(currnode -> next);
    tail -> next = currnode;
    tail = currnode;
    tail -> next = NULL;
}


