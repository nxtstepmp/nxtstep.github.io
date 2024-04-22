import java.io.*;
import java.util.Random;

class Num
{
  public void numprint(int n)
  {
    for(int i=n;i>0;i--)
    {
      System.out.println(i);
      try
      {
        Thread.sleep(500);
      }
      catch(Exception e)
      {
        System.out.println(e);
      }
    }
  }
}
class T1 extends Thread
 {
   public void run()
   {
     Num o=new Num();
     o.numprint(5);
   }
 }
class T2 extends Thread
{
  public void run()
  {
    Num a=new Num();
    a.numprint(10);
  }
}

public class threadsync1
{
   public static void main(String args[])
   {
     T1 obj1=new T1();
     T2 obj2=new T2();
     obj1.start();
     obj2.start();
   }
}
