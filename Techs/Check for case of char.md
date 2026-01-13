# Check for case of char

```C
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase character.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a lowercase character.\n", ch);
    } else {
        printf("'%c' is not an alphabetic character.\n", ch);
    }

    return 0;
}
```

# Check if char is not a letter C

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
