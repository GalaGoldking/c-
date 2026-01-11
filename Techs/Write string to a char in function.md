# Example

```C
#include <stdio.h>

void copyStringManually(char* destination, const char* source) {
    int i = 0;
    while (source[i] != '\0') { // Loop until the null-terminator is found
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Manually add the null-terminator at the end
}

int main() {
    char myBuffer[50];
    const char* myString = "Manual Copy";

    copyStringManually(myBuffer, myString);

    printf("The string in main is: %s\n", myBuffer); // Output: The string in main is: Manual Copy

    return 0;
}
```
