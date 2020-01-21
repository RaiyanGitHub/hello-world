/** This is to celebrate the freedom I have earned from DS in C/C++ from having passed the 3rd semester *//*//
//****I will be doing said celebration by creating this code for linked list operations ****************//*/*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>  //for string manipulation functions.
#include<conio.h>   //for using getch() and getc() and the likes of 'em which allows to override scanf
#include<dos.h>     //for using system clear functions

typedef struct list{
	long int toy_num;     // since we will be toying around with this element
	struct list *next;	
}lnk;
#define linkz sizeof(lnk)

#define number_of_lists 10		// see lines 17 & 18 to understand

#define csn create_single_node		// shortening the name of a function
(lnk*)(csn)();

int ii;
lnk *head_chain[number_of_lists];
for(ii = 0; ii<number_of_lists; ii++)			head_chain[ii] = NULL;


int main(){

	// to be filled all in due time By the Will of God

	return 0;
}

(lnk*) (create_single_node)(){
	long int data;
	printf("Enter the number you want to place in the node:\t");		// I plan to edit this "number" part later on
	scanf("%ld",&data);
	lnk *vertex = (lnk*)malloc(linkz);
	lnk->toy_num = data;
	lnk->next = NULL;
	return toy_num;		// yes I am returning the node pointer to this newly created linked list node
}
