# Creating array with malloc

We must include `stdlib.h` header file for `malloc`, `calloc`, `free`

```C
<data_type>* variable_name = malloc(<number of elements> * sizeof(<data_type_or_struct>)
```

# Example

```C
int* indices = malloc(2 * sizeof(int))
```

# Example with struct

```C
#include <stdio.h>
#include <stdlib.h>

// Define the structure
typedef struct {
    int id;
    double value;
} DataPoint;

int main() {
    size_t num_elements = 10; // Number of structs in the array
    
    // Declare a pointer to the struct type
    DataPoint* array_of_structs;

    array_of_structs = (DataPoint*) malloc(num_elements * sizeof(DataPoint));
    
    // A better practice is to use sizeof(*array_of_structs) for type safety
    // array_of_structs = malloc(num_elements * sizeof(*array_of_structs)); 
    // Note: Casting the result of malloc is not strictly necessary in C

    // Check if allocation was successful
    if (array_of_structs == NULL) {
        perror("Failed to allocate memory");
        return EXIT_FAILURE;
    }

    // Access and use the elements (using array notation)
    for (size_t i = 0; i < num_elements; i++) {
        array_of_structs[i].id = i;
        array_of_structs[i].value = (double)i * 1.5;
        printf("Element %zu: id = %d, value = %.2f\n", i, array_of_structs[i].id, array_of_structs[i].value);
    }

    // Free the allocated memory when done
    free(array_of_structs);

    return EXIT_SUCCESS;
}
```
