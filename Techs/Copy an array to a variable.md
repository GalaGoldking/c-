```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Required for memcpy

int main() {
    int original_array[] = {5, 2, 8, 1, 9, 4};
    int n = sizeof(original_array) / sizeof(original_array[0]);

    // 1. Declare the new variable (the destination array) with the same size
    int new_array[n];

    // 2. Copy the elements from the original array to the new array
    // Parameters: destination array, original array, size of an array
    memcpy(new_array, original_array, sizeof(original_array));

    return 0;
}
