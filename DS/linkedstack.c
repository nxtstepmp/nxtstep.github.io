#include<stdio.h>
#include<stdlib.h>
int push();
int pop();
int display();
struct node
{
	int data;
	struct node *link;
}*ptr,*first,*new,*temp;
void main()
{
	int ch;
	printf("***** STACK USING LINKED LIST *******\n \n ");
	do
	{
		printf("   MENU  \n");
		printf("   ----\n");
		printf("1. PUSH \n");
		printf("2. POP \n");
		printf("3. DISPLAY \n");
		printf("4. EXIT\n");
		printf("ENTER YOUR CHOICE \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf(""); 
			        push();
					break;
			case 2: printf("");
					pop();
					break;
			case 3: printf("");
					display();
					break;
			case 4: exit(1);
			default: printf("WRONG CHOICE \n");
		}			
	}while(ch<5);
}
int push()
{
	new = (struct node*)malloc(sizeof(struct node));
	if(new == NULL)
	{
		printf("Insufficient memory , unable to allocate memory. \n");
		return 0;
	}
	else
	{
		printf("Enter value \n");
		scanf("%d",&new->data);
		if(first == NULL)
		{
			first = new;
			new->link=NULL;
		}
		else
		{
			ptr = first;
			while(ptr->link!=NULL)
				ptr=ptr->link;
			ptr->link=new;
			new->link=NULL;
		}
	}
	printf("\n");
	display();
	printf("\n");
}
int pop()
{
	if(first==NULL)
		printf("List empty");
	else
	{
		ptr=first;
		while(ptr->link!=NULL)
		{
			temp=ptr;
			ptr=ptr->link;
		}
		free(ptr);
		temp->link=NULL;
	}
	printf("\n");
	display();
	printf("\n");
}
int display()
{
	temp=first;
	if(first==NULL)
	{
		printf("List is empty");
		return 0;
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d \t",temp->data);
			temp=temp->link;
		}
	}
	printf("\n");
}
