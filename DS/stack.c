#include<stdlib.h>
#include<stdio.h>

int stack[50], top=0, i, max, ch, item;  // Global variables: 'stack' is the array for stack, 'top' is the index of the top element, 'max' is max size, 'ch' is choice, 'item' is the current element

void push();  // Function prototype for push operation
void pop();   // Function prototype for pop operation
void display();  // Function prototype for display operation

void main()
{
    // Prompt user to enter the maximum size of the stack
    printf("Enter maximum size of the stack: ");
    scanf("%d", &max);

    // Loop to show the menu and process user choice
    do
    {
        printf("\n MENU \n 1:PUSH \n 2:POP \n 3:DISPLAY \n 4:EXIT \n ");
        printf("Enter your choice :");
        scanf("%d", &ch);
        switch(ch)  // Handle user's choice
        {
            case 1: push();  // Call push function
                    break;
            
            case 2: pop();  // Call pop function
                    break;
            
            case 3: display();  // Call display function
                    break;
            case 4: exit(1);  // Exit the program
            
            default: printf("Wrong choice");  // Handle invalid input
        }
        
    } while (ch < 4); // Continue until the exit option is chosen

} 

// Function to add an element to the stack
void push()
{
    if(top >= max)  // Check for overflow condition
        printf("Overflow");
    else
    {
        top++;  // Increment top index
        printf("Enter element:");
        scanf("%d", &item);
        stack[top] = item;  // Place the item on the top of the stack
    }
}

// Function to remove the top element from the stack
void pop()
{
    if(top == 0)  // Check for underflow condition
        printf("Underflow");
    else
    {
        item = stack[top];  // Retrieve the top item
        top--;  // Decrement top index
        printf("%d is deleted ", item);  // Display the deleted item
    }
}

// Function to display all elements in the stack
void display()
{
    if(top == 0)  // Check if the stack is empty
        printf("Stack EMPTY");
    else
    {
        for(i = 1; i <= top; i++)  // Loop from the bottom of the stack to the top
            printf("%d\t", stack[i]);  // Print each element
    }
}
