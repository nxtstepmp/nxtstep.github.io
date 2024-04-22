#include<stdio.h>
#include<stdlib.h>

int f = 0, r = 0, n, ch, item, queue[50], i;  // Global variables declaration

void insert();  // Function prototypes for queue operations
void delete();
void display();

void main()
{
      // Prompt user to enter the maximum size of the queue
      printf("Enter the maximum size of the queue: ");
      scanf("%d", &n);

      // Loop to show the menu until the user chooses to exit
      do
      {
	printf("\n MENU \n 1:INSERT \n 2:DELETE \n 3:DISPLAY \n 4:EXIT");
	printf("\n Enter your choice: ");
	scanf("%d", &ch);
	switch(ch)  // Switch statement to handle user's choice
	{
	    case 1: insert();  // Call insert function
             break;
	    case 2: delete();  // Call delete function
	         break;
	    case 3: display();  // Call display function
	         break;
	    case 4: exit(1);  // Exit the program
	    default: printf("Wrong choice");  // Handle invalid input
	}
      }
      while(ch < 4);  // Continue until the exit option is chosen
}

// Function to insert an element into the queue
void insert()
{
    if(r >= n)  // Check for overflow condition
       printf("OVERFLOW");
    else
    {
          r++;  // Increment rear pointer
          printf("Enter the element: ");
          scanf("%d", &item);
          queue[r] = item;  // Insert the item at the rear of the queue
    }
    if(f == 0)  // Initialize the front pointer if the queue was empty
      f = 1;
}

// Function to delete an element from the queue
void delete()
{
     if(f == 0)  // Check for underflow condition
        printf("UNDERFLOW");
     else
     {
         item = queue[f];  // Retrieve the front item
         if(r == f)  // Check if this is the last item in the queue
            r = f = 0;  // Reset the pointers if the last item is deleted
         else
            f++;  // Move the front pointer forward
         printf("%d is deleted", item);  // Display the deleted item
     }
}

// Function to display all elements in the queue
void display()
{
     if(f == 0)  // Check if the queue is empty
        printf("Queue empty");
     else
     {
       for(i = f; i <= r; i++)  // Loop from front to rear
            printf("\t%d", queue[i]);  // Print each element in the queue
     }
}
