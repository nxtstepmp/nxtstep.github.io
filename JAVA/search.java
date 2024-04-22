import java.util.*;
class search
{
	static int index = -1;
	public static int binarySearch(int A[],int lb,int ub,int key)
	{
		if(lb<=ub)
		{
			int mid=(lb+ub)/2;
			if(A[mid]==key)
			{
				index = mid;
			}
			else if(A[mid]>key)
			{
				binarySearch(A,lb,mid-1,key);
			}
			else
			{
				binarySearch(A,mid+1,ub,key);
			}
		}
		return index;
	}
	public static void main(String args[])
	{	Scanner sc = new Scanner(System.in);
		System.out.println("Enter the size of the array:");
		int n;
		n=sc.nextInt();
		int[]A=new int[50];
		System.out.println("Enter the elements in array:");
		
		for(int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
		System.out.println("Enter the element to be searched : ");
		int key;
		key=sc.nextInt();
		int index = binarySearch(A,0,n-1,key);
		if (index==-1)
		{
			System.out.println("Element not found");
			
		}
		else 
		{
			System.out.println("Element found at index "+index);
		}
	}

}

