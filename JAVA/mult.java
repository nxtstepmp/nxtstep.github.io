import java.util.*;
class mult
{
 public static void main(String args[])
 {
   Scanner sc =new Scanner(System.in);
   int i,j,r1,c1,r2,c2;
   System.out.println("Enter the number of rows of the first matrix ");
   r1=sc.nextInt();
   System.out.println("Enter the number of coloumns of the first matrix ");
   c1=sc.nextInt();
   System.out.println("Enter the number of rows of the second matrix ");
   r2=sc.nextInt();
   System.out.println("Enter the number of coloumns of the second matrix ");
   c2=sc.nextInt();
   int a[][] = new int[r1][c1];
   int b[][] = new int[r2][c2];
   System.out.println("Enter the elements in the first matrix ");
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
     {
       a[i][j]=sc.nextInt();
     }
   }
   System.out.println("The first matrix is ");
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
     {
       System.out.print(a[i][j]+" ");
     }
     System.out.println("\n");
   }
   System.out.println("Enter the elements in the Second matrix ");
   for(i=0;i<r2;i++)
   {
     for(j=0;j<c2;j++)
     {
       b[i][j]=sc.nextInt();
     }
   }
   System.out.println("The Second matrix is ");
   for(i=0;i<r2;i++)
   {
     for(j=0;j<c2;j++)
     {
       System.out.print(b[i][j]+" ");
     }
     System.out.println("\n");
   }
   int c[][]= new int[r1][c2];
   if(c1==r2)
   {
     for(i=0;i<r1;i++)
     {
       for(j=0;j<c2;j++)
       {
         c[i][j]=0;
         for(int k=0;k<c1;k++)
         {
           c[i][j]=c[i][j]+a[i][k]*b[k][j];
         }
       }
     }
     System.out.println("The resultant matrix is  ");
     for(i=0;i<r1;i++)
     {
       for(j=0;j<c2;j++)
       {
        System.out.print(c[i][j]+" ");
       }
       System.out.println("\n");
     }
    }
    else
        System.out.println("Matrix multiplication not possible   ");
  }
  }      
               
   
