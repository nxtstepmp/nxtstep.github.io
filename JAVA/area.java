import java.util.*;
class area
{
 float findarea(float l,float b)
 {
  return l*b;
 }
 float findarea(float r)
 {
  return (float)3.14*r*r;
 }
 class shape extends area
 {
  public static void main(String args[])
  {
   area obj=new area();
   Scanner sc =new Scanner(System.in);
   System.out.println("To find the area of rectangle ");
   System.out.println("Enter the length "); 
   float l = sc.nextFloat();
   System.out.println("Enter breadth ");
   float b = sc.nextFloat();
   System.out.println("Area of rectangle = "+ obj.findarea(l,b));
   System.out.println("To find the area of a circle ");
   System.out.println("Enter the radius ");
   float r=sc.nextFloat();
   System.out.println("Area of a circle ="+obj.findarea(r));
   }
  } 
 }  
