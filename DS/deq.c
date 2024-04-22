#include<stdio.h>
#include<stdlib.h>
int DQ[50],F=0,R=0,i,N,ch,c,item;
void insertRear()
{
  if((F==1 && R==N)||(F==R+1))
  {
      printf("\n****Queue if full****\n");
     return;
  }
R++;
printf("\nEnter element to insert: ");
scanf("%d",&item);
DQ[R]=item;
printf("\n----->  %d is inserted\n",item);
if(F==0)
   F=1;
}

void insertFront()
{
  if((F==1 && R==N)||(F==R+1))
  {
      printf("\n****Queue if full****\n");
      return;
  }
if(F==1 || F==0)
  F=N;
else
  F--;
printf("\nEnter element to insert: ");
scanf("%d",&item);
DQ[F]=item;
printf("\n----->  %d is inserted\n",item);
if(R==0)
   R=N;
}

void deleteFront()
{
if(F==0)
{
   printf("\n****No elements in queue****\n");
   return;
}
item=DQ[F];
printf("\n----->  %d is deleted.\n",item);
if(F==R)
{
  R=0;
  F=0;
}
else
{
if(F==N)
  F=1;
else
  F++;
}
}
void deleteRear()
{
if(F==0)
{
  printf("\n****No elements in queue****\n");
  return;
}
item=DQ[R];
printf("\n----->  %d is deleted.\n",item);
if(F==R)
{
   R=0;
   F=0;
}
else
{
  if(R==1)
     R=N;
  else
     R--;
}
}

void display()
{
if(F==0)
{
printf("\n*Queue is empty*\n");
return;
}
printf("\n");
if(R>=F)
{
  for(i=F;i<=R;i++)
  printf("%d\t",DQ[i]);
}
else
{
  for(i=F;i<=N;i++)
  printf("%d\t",DQ[i]);
  for(i=1;i<=R;i++)
  printf("%d\t",DQ[i]);
}
printf("\n");
}
void main()
{
  printf("\nEnter the size of the queue: ");
  scanf("%d",&N);
do
{
 printf("\n******MENU****** \n1:Input Restricted Deque \n2:Output Restricted Deque \n3:EXIT \n**************** \n\nEnter your choice: ");
 scanf("%d",&ch);
switch(ch)
{
case 1: do{
printf("\n******MENU****** \n1:Insert \n2:Delete through Front \n3:Delete through Rear\n4:Display\n5:Exit\n**************** \n\nEnter your choice: ");
scanf("%d",&c);
switch(c){
case 1: insertRear();
        break;
case 2: deleteFront();
        break;
case 3: deleteRear();
        break;
case 4: display();
        break;
case 5: break;
default:printf("\nWrong choice.... Try again\n");
}
}while(c!=5);
break;
case 2: do{
printf("\n******MENU****** \n1:Insert through Front \n2:Insert through Rear \n3:Delete \n4:Display\n5:Exit\n**************** \n\nEnter your choice: ");
scanf("%d",&c);
switch(c){
case 1: insertFront();
break;
case 2: insertRear();
break;
case 3: deleteFront();
break;
case 4: display();
break;
case 5: break;
default:printf("\nWrong choice.... Try again\n");
}
}while(c!=5);
break;
case 3: printf("\n****Program terminated****\n");
exit(1);
default:printf("\nWrong choice.... Try again\n");
}
}while(ch!=3);
}


