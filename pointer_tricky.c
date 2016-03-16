#include <stdio.h>
#include <stdlib.h>
struct node
{
int data ;
struct node * next ; 	
};
int main ()
{
	struct node *head= NULL; // List head is empty now 
	struct node *temp = malloc(sizeof (struct node) ); 
	temp->data = 12 ; 
	temp->next = NULL; 

/// WARNING : make sure to know the difference between 
/// temp = NULL , and temp->next = NULL: 
// temp = NULL ; means that the same node it is null |head|==0
//temp->next= NULL, means check if the adjacent node is node |23 |-|200|(add:100)-->|5|-|0|(add:200)---->NULL, in this case yes 
	//the next one points to NULL 
}