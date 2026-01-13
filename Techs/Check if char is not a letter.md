```C
#include <stdio.h>

int main() {
    char ch = '5';

    // Check if the character is NOT in the range of 'A'-'Z' or 'a'-'z'
    if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
        printf("'%c' is not a letter.\n", ch);
    } else {
        printf("'%c' is a letter.\n", ch);
    }

    return 0;
}
```
