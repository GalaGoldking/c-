# Check data type of a variable using [_Generic](https://github.com/GalaGoldking/c-/blob/main/Basic/_Generic.md)

```C
#include <stdio.h>

#define get_type(X) _Generic((X), \
                      int: "int", \
                      double: "double", \
                      float: "float", \
                      char: "char", \
                      char*: "string (char*)", \
                      default: "unknown type" \
) (X)

int main(void)
{
    int age = 25;
    float salary = 4500.50;

    printf("age is %s\n", get_type(age));
    printf("salary is %s\n", get_type(salary));

    return 0;
}
```
