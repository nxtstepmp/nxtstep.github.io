#include<stdio.h>
void main()
{
 int s[50][50],i,j,m,n,k,count=0,c[50][50];
 printf("Enter the number of rows and colomns \t");
 scanf("%d %d",&m,&n);
 printf("Enter the elements in the matrix ");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&s[i][j]);
  }
 }
 printf("The original matrix is ");
 printf("\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d \t",s[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(s[i][j]!=0)
      count++;
  }
 }
 if(count<(n*m)/2)
 {
  c[0][0]=m;
  c[0][1]=n;
  c[0][2]=count;
  k=1;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(s[i][j]!=0)
   {
    c[k][0]=i;
    c[k][1]=j;
    c[k][2]=s[i][j];
    k++;
   }
  }
 }
 printf("The sparse matrix is ");
 printf("\n");
 for(i=0;i<count+1;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d \t",c[i][j]);
  }
  printf("\n");
 }
}
}
