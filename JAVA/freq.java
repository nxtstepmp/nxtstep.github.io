import java.util.Scanner;
class freq
{
 public static void main(String args[])
 {
   char letter;
   String word;
   int count=0,len;
   Scanner sc = new Scanner(System.in);
   System.out.println("Enter the word");
   word = sc.next();
   System.out.println("The entered String is "+ word);
   len= word.length();
   System.out.println("Enter the letter to find the frequency of : ");
   letter =  sc.next().charAt(0);
   for(int j=0;j<len;j++)
   {
     if(word.charAt(j)==letter)
     {
       count++;
     }
     else
     {
       continue;
      }
   }
    System.out.println("The frequency of "+ letter + " is = "+ count);
    }
    }
