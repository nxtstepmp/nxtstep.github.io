#include<stdio.h>

void main() {
 int a[50], n, i, search, low, mid, high, f=0, j, k, temp;

 // Prompting the user to enter the size of the array
 printf("Enter the size of the array \n");
 scanf("%d", &n);

 // Prompting the user to input the elements of the array
 printf("Enter elements into the array \n");
 for(i=0; i<n; i++)
     scanf("%d", &a[i]);

 // Sorting the array using bubble sort
 for(j=0; j<n-1; j++) {
  for(k=0; k<n-1-j; k++) {
   if(a[k] > a[k+1]) {
    temp = a[k];
    a[k] = a[k+1];
    a[k+1] = temp;
   }
  }
 }

 // Displaying the sorted array
 printf("The inputted array is \n");
 for(i=0; i<n; i++)
     printf("%d \t \n", a[i]); 

 // Prompting the user to enter the element to be searched
 printf("Enter the search element \n");
 scanf("%d", &search);

 // Initializing variables for binary search
 low = 0;
 high = n - 1; // Corrected from 'high = n;' to 'high = n - 1;' for accurate binary search

 // Binary search algorithm
 while(low <= high) {
  mid = (low + high) / 2;
  if(a[mid] == search) {
    printf("Element found at %d position \n", (mid + 1));
    f = 1;
    break;
  }
  else if(search < a[mid])
    high = mid - 1;
  else
    low = mid + 1;
 }

 // If the element is not found, indicating so
 if(f == 0)
    printf("Element not found \n");
}
