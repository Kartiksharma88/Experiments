// C Program to demonstrate the use of free() function
#include <stdio.h> 
#include <stdlib.h> 
int main() { 
    // This pointer will hold the base address of the block created 
    int *ptr, *ptr1; 
    int n, i; 
    // Get the number of elements for the array 
    n = 5; 
    printf("Enter number of elements: %d\n", n); 
    // Dynamically allocate memory using malloc() 
    ptr = (int*)malloc(n * sizeof(int)); 
    // Dynamically allocate memory using calloc() 
    ptr1 = (int*)calloc(n, sizeof(int)); 
    // Check if the memory has been successfully allocated by malloc and calloc or not 
    if (ptr == NULL || ptr1 == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
        printf("Memory successfully allocated using malloc.\n");  // Memory has been successfully allocated 
        // Free the memory 
        free(ptr); 
        printf("Malloc Memory successfully freed.\n"); 
        printf("\nMemory successfully allocated using calloc.\n");  // Memory has been successfully allocated 
        // Free the memory 
        free(ptr1); 
        printf("Calloc Memory successfully freed.\n"); 
    } 
    return 0; 
} 

