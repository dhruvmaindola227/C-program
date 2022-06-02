#include<stdio.h>

void main(){

    int *p;
    int x = 10;
    p = &x;
    printf("%d\n" , p);
    printf("%d" , *p);

}