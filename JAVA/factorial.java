import java.util.*;
class factorial
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    int i,n,f=1;
    System.out.println("Enter the number ");
    n=sc.nextInt();
    for(i=1;i<=n;i++)
    {
      f=f*i;
    }
    System.out.println("The factorial is  " + f);
    }
  }
