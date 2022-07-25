#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int coef;
	int pow;
	struct Node* next;
};

void createPoly(struct Node** poly)
{
	int coef, exp, cont;
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	*poly = temp;
	do{
		printf("\n Coeffecient: ");
		scanf("%d", &coef);
		printf("\n Exponent: ");
		scanf("%d", &exp);
		temp->coef = coef;
		temp->pow = exp;
		temp-> next = NULL;
		printf("\nHave more terms? 1 for y and 0 for no: ");
		scanf("%d", &cont);
		if(cont==1)
		{
			temp->next = (struct Node*)malloc(sizeof(struct Node));
			temp = temp->next;
			temp->next = NULL;
		}
	}while(cont!=0);	
}

void disPoly(struct Node* poly)
{
	printf("\n\nPolynomial expression is: ");
	while(poly != NULL)
	{
		printf("%dX^%d", poly->coef, poly->pow);
		poly = poly->next;
		if(poly != NULL)
			printf("+");
	}
}

void addPoly(struct Node** result, struct Node* first, struct Node* second)
{
 	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
 	temp->next = NULL;
 	*result = temp;
 	while(first!=NULL && second!=NULL)
 	{
 		if(first->pow > second->pow)
 		{
 			temp->coef = first->coef;
 			temp->pow = first->pow;
 			first = first->next;
 		}
 		else if(first->pow < second->pow)
 		{
 			temp->coef = second->coef;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 		else
 		{
 			temp->coef = first->coef + second->coef;
 			temp->pow = first->pow;
 			first = first->next;
 			second = second->next;
 		}

 		if(first!=NULL && second!=NULL)
 		{
 			temp->next = (struct Node*)malloc(sizeof(struct Node));
 			temp = temp->next;
 			temp->next = NULL;
 		}
 	}
 	while(first!=NULL || second!=NULL)
 	{
 		temp->next = (struct Node*)malloc(sizeof(struct Node));
 		temp = temp->next;
 		temp->next = NULL;
 			
 		if(first)
 		{
 			temp->coef = first->coef;
 			temp->pow = first->pow;
 			first = first->next;
 		}

 		else if(second)
 		{
 			temp->coef = second->coef;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 	}
}

int main()
{

	struct Node* first = NULL;
	struct Node* second = NULL;
	struct Node* result = NULL;

	
	printf("\nEnter the First polynomial:\n");
	createPoly(&first);
	disPoly(first);
	printf("\nEnter the Second polynomial:\n");
	createPoly(&second);
	disPoly(second);
	addPoly(&result, first, second);

    printf("\nThe resultant ");
	disPoly(result);
	return 0;
}