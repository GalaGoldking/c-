# Using `strcmp()`

The strcmp() function is defined in the <string.h> header file and is designed specifically for comparing null-terminated strings (C-style strings). 

Syntax:

```C
int strcmp(const char *str1, const char *str2);
```

Return Value:

The function returns an integer value based on the comparison: 
0: If both strings are equal.
A negative value: If str1 is lexicographically (alphabetically) less than str2.
A positive value: If str1 is lexicographically greater than str2. 

```C
#include <stdio.h>
#include <string.h>

int main() {
    char myString[] = "C"; // The string to check
    char target[] = "C";   // The target string
    
    // Compare the two strings
    if (strcmp(myString, target) == 0) {
        printf("The string is equal to \"C\".\n");
    } else {
        printf("The string is not equal to \"C\".\n");
    }

    // Another example with a different string
    char anotherString[] = "Hello";
    if (strcmp(anotherString, target) == 0) {
        printf("The second string is equal to \"C\".\n");
    } else {
        printf("The second string is not equal to \"C\".\n");
    }
    
    return 0;
}
```
