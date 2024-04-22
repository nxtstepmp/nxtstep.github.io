//bharat krishna,S3R2-19
//linear queue operatiions
#include<stdio.h>
#include<stdlib.h>
int f,r,n,ch,item,queue[50],i;
void insert();
void delete();
void display();
void main()
{
      printf("enter the maximum size of the queue");
      scanf("%d",&n);
      do
      {
	printf("\n MENU \n 1:INSERT \n 2:DELETE \n 3:DISPLAY \n 4:EXIT");
	printf("\n enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1:insert();
                     break;
	    case 2:delete();
	         break;
	    case 3:display();
	         break;
       	    case 4:exit(1);
	    default:printf("wrong choice");
	}
      }
      while(ch<4);
}
void insert()
{
    if(r>=n)
       printf("overflow");
    else
    {
          r++;
          printf("enter the element");
          scanf("%d",&item);
          queue[r]=item;
    }
    if(f==0)
      f=1;
}
void delete()
{
     if(f==0)
        printf("underflow");
     else
     {
         item=queue[f];
         if(r==f)
            r=f=0;
         else
            f++;
         printf("%d is deleted",item);
     }
}
void display()
{
     if(f==0)
        printf("queue empty");
     else
     {
       for(i=f;i<=r;i++)
            printf("\t%d",queue[i]);
     }
}
