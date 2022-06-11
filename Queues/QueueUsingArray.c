#include<stdio.h>

int queue[10];
int front=-1;
int rear = -1;
void enqueue(int value);
int dequeue();
void peek();
void display();
void main(){
    int userChoice = 0;
    int value;
    printf("Creating the first element in queue of size 10\nEnter the value");
    scanf("%d" , &value);
    enqueue(value);
    printf("Press 1 to insert\nPress 2 to delete\nPress 3 to display\nPress 4 to peek\nPress 5 to quit\n");
    scanf("%d" , &userChoice);
    while(userChoice < 6 && userChoice > 0 && rear < 10){
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
    if(rear > 9){
        printf("Queue overflow!");
        return;
    }
    queue[++rear] = value;
    if(rear == 0){
        front = 0;
    }
}

int dequeue(){
    if(rear == -1){
        printf("Queue underflow!");
        return;
    }
    return queue[front++];
}

void peek(){
    if(rear == -1){
        printf("Queue underflow!");
        return;
    }
    printf("The front element is %d - > ", queue[front]);
}

void display(){
    printf("front -> ");
    for (int i = front; i <= rear ; i++)
    {
        printf(" %d ", queue[i]);
    }
    printf(" <- rear\n");
    
}