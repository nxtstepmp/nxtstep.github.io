//S3R2 22 
//ARRAY OPERATIONS

#include<stdio.h>
#include<stdlib.h>

int A[50],N=0;

void insert(int item,int k)
{
	int i=N;
	while(i>=k)
	{
		A[i+1]=A[i];
		i--;
	}
	A[k]=item;
	N=N+1;
	printf("%d inserted at position %d",item,k);
}

void delete(int k)
{
	int item=A[k],i=k;
	while(i<=N-1)
	{
		A[i]=A[i+1];
		i++;
	}
	printf("%d is deleted from position %d \n",item,k);
	N=N-1;
}	

void display()
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d \t",A[i]);
	}	
	printf("\n");	
}				
		
void main()
{
	int i,ch,item,k;
	printf("Enter the array size: ");
	scanf("%d",&N);
	printf("Enter the array elements: ");
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Array is: \n");
	display();	
	do
	{
		printf("****MENU**** \n 1.INSERT \n 2.DELETE \n 3.DISPLAY \n 4.EXIT \n ~~~~~~~");
		printf(" \n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
			        printf("Enter the element to insert: ");
			        scanf("%d",&item);
			        printf("Enter the index at which to insert: ");
			        scanf("%d",&k);
			        insert(item,k-1);
			        printf("\n Updated array: \n");
			        display();
					break;
			case 2: 
					printf("Enter the index at which to delete: ");
					scanf("%d",&k);
					delete(k-1);
					printf("Updated array: ");
			        display();
					break;		
			case 3: display();
					break;
			case 4: exit(1);
			default: printf("Wrong choice...\n");
		}
	}
	while(ch!=4);
}

