#include<stdio.h>
struct node {
    int coefficient;
    int power;
};
int size = 0;
struct node *head , *tail = NULL;\
struct node * add (struct node *head1 , struct node *head2);
struct node * subtract (struct node *head1 , struct node *head2);
struct node * multiply (struct node *head1 , struct node *head2);
struct node * getNode(int position);
void display();
void insertAtBeginning(int value);