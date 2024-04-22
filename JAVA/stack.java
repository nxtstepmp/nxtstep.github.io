import java.util.*;
class stack
{
  int top=0,max=5;
  int stack[]=new int[max];
 public int push()
 {
  Scanner sc = new Scanner(System.in);
  int item;
  if(top>=max)
     System.out.println("Overflow");
  else
  {
     top++;
     System.out.println("Enter the element to be pushed ");
     item=sc.nextInt();
     stack[top]=item;
     System.out.println(item +"is inserted ");   
  }
 return 0; 
 }
 public int pop()
 {
  int item;
  if(top==-1)
     System.out.println("Overflow ");
  else
  {
   item =stack[top];
   top--;
   System.out.println(item + "is deleted ");
  }
 return 0; 
 }
 public int display()
 {
  int i;
  for(i=0;i<max;i++)
      System.out.println(stack[i]);
  return 0;        
 }     
 public static void main(String args[])
 {
  Scanner sc = new Scanner(System.in);
  int ch;
  do
  {
  System.out.println("MENU ");
  System.out.println("1. PUSH ");
  System.out.println("2. POP ");
  System.out.println("3. Display ");
  System.out.println("4. EXIT");
  System.out.println("Enter your choice ");
  ch = sc.nextInt();
  switch(ch)
  {
   case 1 : push();
            break;         
   case 2 : pop();
            break;
   case 3 : display();
            break;
   case 4 : System.exit(1);
            break;         
   default : System.out.println("Wrong choice ! ");
  }
 }while(ch<5);
 }
}  
  
