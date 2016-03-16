#include <stdio.h>
#include <stdlib.h>
struct node
{
int data ;
struct node * next ; 	
};
int main ()
{
	//struct node *head= NULL; // List head is empty now 
	//struct node *temp = malloc(sizeof (struct node) ); 
	//temp->data = 12 ; 
	//temp->next = NULL; 
int x = 5, *p=&x, **q=&p; 
printf("%p\n",p); 
printf("%p\n",&x);
printf("%p\n",q);//This takes thee address of &p and *q will take address of x,p:)
}