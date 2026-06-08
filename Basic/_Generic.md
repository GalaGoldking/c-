# _Generic

Provides a way to choose one of several expressions at compile time, based on a type of a controlling expression

### Example

```C
#include <stdio.h>

// Define a macro to return the type name as a string literal
#define get_type(X) _Generic((X), \
    int: "int", \
    float: "float", \
    double: "double", \
    char: "char", \
    char*: "string (char*)", \
    default: "unknown type" \
)

int main() {
    int age = 25;
    float salary = 4500.50;
    
    printf("age is %s\n", get_type(age));       // Outputs: int
    printf("salary is %s\n", get_type(salary)); // Outputs: float
    
    return 0;
}
```
