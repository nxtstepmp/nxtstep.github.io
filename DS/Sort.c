#include<stdio.h>
#include<stdlib.h>
int A[100],n,i,j,k,tmp,ch,pos,key;
void main()
{
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter values to the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	do{
	printf("\nMENU\n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : 
		for(i=0;i<n;i++)
		{	for(j=0;j<n-i-1;j++)
			{	if(A[j]>A[j+1])
				{	tmp=A[j];
					A[j]=A[j+1];
					A[j+1]=tmp;
				}
			}
		}
		printf("The Bubble sorted array is ");
			for(i=0;i<n;i++)
		{
			printf("%d ",A[i]);
		}
		printf("\n");
		break;
		
		
		case 2 : 
		for(j=0;j<n;j++)
		{
			pos=j;
			for(k=(j+1);k<n;k++)
			{
				if(A[k]<A[pos])
				{
					pos=k;
				}
			}
				if(j!=pos)
				{
					tmp=A[pos];
					A[pos]=A[j];
					A[j]=tmp;
				}
		}
		printf("The Selection sorted array is ");
			for(i=0;i<n;i++)
		{
			printf("%d ",A[i]);
		}
		printf("\n");
		break;
		
		
		case 3 :
		for(i=1;i<n;i++)
		{	key=A[i];
			j=i-1;
			while(j>=0 && A[j]>key)
			{	A[j+1]=A[j];
				j=j-1;
			}
			A[j+1]=key;
		}
		printf("The Insertion sorted array is ");
			for(i=0;i<n;i++)
		{
			printf("%d ",A[i]);
		}
		printf("\n");
		break;
		
		case 4 : exit(1);
		break;
		
		default: printf("Wrong choice:");
	}
	}while (ch<5);
}
		
	
