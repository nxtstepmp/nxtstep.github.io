
#include<stdio.h>
#include<stdlib.h>

// Definition of the node structure
struct node
{
	int data;           // Integer type data will be stored in the node
	struct node *link;  // Pointer to the next node in the list
}*ptr, *first, *new, *temp;  // Global pointers used throughout the linked list operations

// Function prototypes for linked list operations
int traverse();
int insert_beginning();
int insert_end();
int insert_betweenAF();
int insert_betweenBF();
int delete_beginning();
int delete_end();
int delete_betweeen();

// Main function: driver of the program
void main()
{
	int ch;  // Variable to store the user's choice
	do
	{
	    // Menu for performing operations on a singly linked list
	    printf("Single Linked List\n");
	    printf("MENU\n");
	    printf("1. insert at beginning \n");
	    printf("2. insert at end \n");
	    printf("3. insert in between(after a given node ) \n");
	    printf("4. insert in between(before a given node ) \n");
	    printf("5. delete beginning \n");
	    printf("6. delete end \n");
	    printf("7. delete in between \n");
	    printf("8. Exit \n");
	    printf("Enter your choice \n");
	    scanf("%d",&ch);  // Read user input
	    switch(ch)  // Switch statement to handle the choice
	    {
		    case 1 : printf(" ");
		             insert_beginning();
					 break;
		    case 2 : printf(" ");
	                 insert_end();
	                 break;
	        case 3 : printf(" ");
	                 insert_betweenAF();
	                 break;
	        case 4 : printf(" ");
	                 insert_betweenBF();
	                 break;
	        case 5 : printf(" ");
	                 delete_beginning();
	                 break;
	        case 6 : printf(" ");
	                 delete_end();
	                 break;
	        case 7 : printf(" ");
	                 delete_betweeen();
	                 break;
	   		case 8 : exit(1);	 // Exit from the program
			default : printf("Wrong choice \n ");  // Handle invalid choice	 
	    }
	}while(ch < 10);  // Continue until the user chooses to exit	
}

// Function to traverse the list and print all elements
int traverse()
{
	temp = first;
	if(first == NULL)
	{
		printf("List is empty");  // Inform user the list is empty
		return 0;
	}
	else
	{
		while(temp != NULL)
		{
			printf("%d \t", temp->data);  // Print each element followed by a tab
			temp = temp->link;  // Move to the next node
		}
	}
}

// Function to insert a new node at the beginning of the list
int insert_beginning()
{
	new = (struct node*)malloc(sizeof(struct node));  // Allocate memory for new node
	if(new == NULL)
	{
		printf("Insufficient memory, unable to allocate memory.\n");  // Memory allocation failed
		return 0;
	}
	else
	{
		printf("Enter value \n");
		scanf("%d", &new->data);  // Read data for the node
		new->link = first;  // Point new node's link to the first node
		first = new;  // Make the new node the first node
	}
	printf("\n");
	traverse();  // Display the list
	printf("\n");
	
}

// Function to insert a new node at the end of the list
int insert_end()
{
	new = (struct node*)malloc(sizeof(struct node));  // Allocate memory for new node
	if(new == NULL)
	{
		printf("Insufficient memory, unable to allocate memory.\n");  // Memory allocation failed
		return 0;
	}
	else
	{
		printf("Enter value \n");
		scanf("%d", &new->data);  // Read data for the node
		if(first == NULL)
		{
			first = new;  // If list is empty, new node is the first node
			new->link = NULL;  // New node's link is NULL
		}
		else
		{
			ptr = first;
			while(ptr->link != NULL)
				ptr = ptr->link;  // Traverse to the last node
			ptr->link = new;  // Last node's link points to the new node
			new->link = NULL;  // New node's link is NULL
		}
	}
	printf("\n");
	traverse();  // Display the list
	printf("\n");
}

// Function to insert a new node after a specified node
int insert_betweenAF()
{
	int DATA;
	new = (struct node*)malloc(sizeof(struct node));  // Allocate memory for new node
	if(new == NULL)
	{
		printf("Insufficient memory, unable to allocate memory.\n");  // Memory allocation failed
		return 0;
	}
	if(first == NULL)
	{
		printf("List is empty, element cannot be inserted in between.\n");  // List is empty
		return 0;
	}
	else
	{
		printf("Enter value \n");
		scanf("%d", &new->data);  // Read data for the new node
		printf("Enter the value after which the new element should be inserted \n");
		scanf("%d", &DATA);  // Read data of the node after which insertion should occur
		ptr = first;
		while(ptr->data != DATA)
			ptr = ptr->link;  // Find the specified node
		new->link = ptr->link;  // New node points to specified node's next node
		ptr->link = new;  // Specified node points to new node
	}
	printf("\n");
	traverse();  // Display the list
	printf("\n");
}

// Function to insert a new node before a specified node
int insert_betweenBF()
{
	int DATA;
	new = (struct node*)malloc(sizeof(struct node));  // Allocate memory for new node
	if(new == NULL)
	{
		printf("Insufficient memory, unable to allocate memory.\n");  // Memory allocation failed
		return 0;
	}
	if(first == NULL)
	{
		printf("List is empty, element cannot be inserted in between.\n");  // List is empty
		return 0;
	}
	else
	{
		printf("Enter value \n");
		scanf("%d", &new->data);  // Read data for the new node
		printf("Enter the value before which the new element should be inserted \n");
		scanf("%d", &DATA);  // Read data of the node before which insertion should occur
		ptr = first;
		while(ptr->data != DATA)
		{
			temp = ptr;  // Store previous node
			ptr = ptr->link;  // Move to next node
		}
		temp->link = new;  // Previous node's link points to new node
		new->link = ptr;  // New node's link points to specified node
	}
	printf("\n");
	traverse();  // Display the list
	printf("\n");
}

// Function to delete the first node of the list
int delete_beginning()
{
	if(first == NULL)
		printf("List empty");  // Inform if list is empty
	else
	{
		ptr = first;  // Point to the first node
		first = first->link;  // Move first to the next node
		free(ptr);  // Free the memory of the old first node
	}
	printf("\n");
	traverse();  // Display the list
	printf("\n");
}

// Function to delete the last node of the list
int delete_end()
{
	if(first == NULL)
		printf("List empty");  // Inform if list is empty
	else
	{
		ptr = first;
		while(ptr->link != NULL)
		{
			temp = ptr;  // Store previous node
			ptr = ptr->link;  // Move to next node
		}
		free(ptr);  // Free the memory of the last node
		temp->link = NULL;  // Previous node's link is set to NULL
	}
	printf("\n");
	traverse();  // Display the list
	printf("\n");
}

// Function to delete a specified node from the list
int delete_betweeen()
{
	int DATA;
	if(first == NULL)
	{
		printf("List is empty, element cannot be deleted.\n");  // Inform if list is empty
		return 0;
	}
	else
	{
	    printf("Enter the element that should be deleted in between\n");
	    scanf("%d", &DATA);  // Read data of the node to be deleted
		ptr = first;
		while(ptr->data != DATA)
		{
			temp = ptr;  // Store previous node
			ptr = ptr->link;  // Move to next node
		}
		temp->link = ptr->link;  // Previous node's link skips the current node
		free(ptr);  // Free the memory of the current node
	}
	printf("\n");
	traverse();  // Display the list
	printf("\n");
}
