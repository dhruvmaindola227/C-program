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
    if((rear+1)%10 == front){
        printf("Queue overflow!");
        return;
    }
    else if(rear == -1 & front == -1){    
        front = 0;
        rear = 0;
        queue[rear] = value;
    }else{
        rear = (rear+1) % 10;
    queue[rear] = value;
    }
    printf("enqueue rear -> %d\n",rear);
    printf("enqueue front -> %d\n",front);
}

int dequeue(){
    if(rear == -1 && front == -1){
        printf("Queue underflow!\n");
        return;
    }
    if(front == rear){
        int toReturn = queue[front];
        front = -1;
        rear = -1;
        return toReturn;
    }
    printf("dequeue front -> %d\n",(front+1)%10);
    printf("dequeue rear -> %d\n",rear);
    int toReturn = queue[front];
    front = (front + 1) % 10;
    return toReturn;
}

void peek(){
    if(rear == -1){
        printf("Queue underflow!\n");
        return;
    }
    printf("The front element is %d - > ", queue[front]);
}

void display(){
    if(front == -1 && rear == -1){
        printf("queue is empty....Nothing to display!\n");
    }
    int i = front;
    printf("front -> ");
    while (i != rear)
    {  
         printf(" %d " , queue[i]);
        i = (i+1) % 10;
       
    }
     printf(" %d " , queue[i]);
     printf(" <- rear\n");
     return;
    
}