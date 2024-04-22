import java.io.*;
public class sum
{
 public static void main(String args[]) throws IOException
 {
  int sum=0,i,len;
  String num="";
  BufferedReader br = new BufferedReader(new FileReader("file.txt"));
  String a =br.readLine();
  len=a.length();
  System.out.println("The numbers are : "+ a);
  for(i=0;i<len;i++)
  {
   num+=a.charAt(i);
   if(a.charAt(i)!=' ')
   {
    System.out.println(num);
    sum = sum+Integer.parseInt(num);
    num="";
    continue;
    }
  }
  System.out.println("The sum is " + sum);
  }
 } 
