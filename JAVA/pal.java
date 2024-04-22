import java.util.Scanner;
class pal
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    String word,rev="";
    int i,len;
    System.out.println("Enter the word");
    word = sc.next();
    System.out.println("The entered String is "+ word);
    len= word.length();
    for(i=len-1;i>=0;i--)
    {
      rev = rev+ word.charAt(i);
    }
    System.out.println("The reversed string is "+ rev);
    if(word.equals(rev))
    {
     System.out.println("It is a palindrome string .");
    }
    else
    {
     System.out.println("It is not a palindrome string ");
     }
    }
    }
