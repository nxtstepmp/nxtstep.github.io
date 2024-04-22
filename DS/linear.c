#include<stdio.h>

void main() {
    int a[50], i, n, search, f=0;  // Declaration of variables: 'a' is the array, 'i' is loop counter, 'n' is size of array, 'search' is the value to find, 'f' is a flag

    // Prompting the user to enter the size of the array
    printf("Enter the size of the array \n");
    scanf("%d", &n);

    // Prompting the user to enter the elements of the array
    printf("Enter elements into the array \n");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    // Asking for the element to search within the array
    printf("Enter the search element \n");
    scanf("%d", &search);

    // Linear search algorithm: iterates through the array to find the 'search' element
    for(i=0; i<n; i++) {
        if(a[i] == search) {  // Compares each element with the search key
            printf("Element found at %d position \n", i+1); // If found, prints the position (i+1 for 1-based index)
            f = 1;  // Set flag to indicate that the element has been found
            break;  // Exit the loop after finding the first instance of the search key
        }
    }

    // If the element was not found, the flag 'f' remains 0
    if(f == 0) {
        printf("Element not found\n");  // Print that the element is not found
    }
}
