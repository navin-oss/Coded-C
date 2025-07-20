#include <stdio.h>

int main() {
    // Define and initialize an array
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
      int i;
    // Traverse and print the elements of the array
    printf("Array elements:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

