import java.util.Scanner;
class reverse
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    String word,rev="";
    int i,len;
    System.out.println("Enter the word");
    word = sc.nextLine();
    System.out.println("The entered String is "+ word);
    len= word.length();
    for(i=len-1;i>=0;i--)
    {
      rev = rev+ word.charAt(i);
    }
    System.out.println("The reversed string is "+ rev);
    }
}    
