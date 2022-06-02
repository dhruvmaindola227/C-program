#include<stdio.h>
#include<string.h>
// void display(struct student *p);
struct student
{
    char name[20];
    int rollnumber;
    int marks;
};
void display(struct student *p);

int main(){
    struct student s1 = {"Dhruv" , 35 , 100};
    struct student s2;
    scanf("%s%d%d" , s2.name , &s2.rollnumber , &s2.marks); 
    display(&s2);
    return 0;

}
void display(struct student *p) 
    {
    printf("student name is : %s\n" , p->name);
    printf("student roll number is : %d\n" , p->rollnumber);
    printf("student marks is : %d\n" , p->marks);
    }


