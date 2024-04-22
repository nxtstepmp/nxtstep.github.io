import java.util.*;
class prime
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    int i,n,c=0;
    System.out.println("Enter the Number ");
    n=sc.nextInt();
    for(i=1;i<=n;i++)
    {
      if(n%i==0)
      {
       c++;
      }
    }
    if(c==2)
       System.out.println("It is a prime number ");
    else
       System.out.println("It is not a prime number ");
       }
       }   
