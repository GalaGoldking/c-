# Code example

```C
#include <stdio.h>
#include <string.h>

int main() {
    char myString[] = "Hello, World!";
    size_t length; 

    length = strlen(myString);

    printf("The length of the string is: %zu\n", length); 
    
    return 0;
}
```

To use `strlen()` we must include string.h header file. 

size_t is the recommended type for storing lengths
