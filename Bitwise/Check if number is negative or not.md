In C, you can check if a number is negative by examining its `most significant bit (MSB)`, which acts as the sign bit in two's complement representation (the common method for storing signed integers). A sign bit of 1 indicates a negative number, while a sign bit of 0 indicates a non-negative number (positive or zero). 

# Method 1: Using the Right Shift Operator (`>>`) 

This method relies on the behavior of the signed right-shift operator in C, which typically preserves the sign bit (filling the newly created bits with 1 for negative numbers, and 0 for positive numbers). 

<img width="1888" height="563" alt="image" src="https://github.com/user-attachments/assets/853275c2-b595-4a79-8893-255e34485b79" />

```C
#include <stdio.h>
#include <limits.h> // For CHAR_BIT

int is_negative(int num) {
    // Determine the number of bits in an int
    int bits = sizeof(int) * CHAR_BIT;
    // Right shift the number by bits - 1 to move the MSB to the LSB position
    // If num is negative, the result will be -1 (all 1s).
    // If num is non-negative, the result will be 0 (all 0s).
    int sign = num >> (bits - 1);

    // num = -10 in binary is 11111111111111111111111111110110
    // After right shift with 31 it becomes 00000000000000000000000000000001, since 1 is at the end it is negative

    // num = 20 in binary is 00000000000000000000000000010100
    // After right shift with 31 it becomes 00000000000000000000000000000000, since it is all 0 it is positive
    
    // Check if the result is -1 (which has the MSB as 1)
    // A negative number right-shifted will stay negative (typically -1), which is non-zero (true)
    // A non-negative number right-shifted will become 0, which is zero (false)
    return sign != 0;
}

int main() {
    int num1 = -10;
    int num2 = 20;
    int num3 = 0;

    printf("%d is negative: %s\n", num1, is_negative(num1) ? "Yes" : "No");
    printf("%d is negative: %s\n", num2, is_negative(num2) ? "Yes" : "No");
    printf("%d is negative: %s\n", num3, is_negative(num3) ? "Yes" : "No");

    return 0;
}
```

Output:

```text
-10 is negative: Yes
20 is negative: No
0 is negative: No
```

# Method 2: Using Bitwise AND (`&`) and Left Shift (`<<`) 

This method checks the MSB directly by using a bit mask.

```C
#include <stdio.h>
#include <limits.h>

int is_negative_and(int num) {
    // Create a mask with only the MSB set to 1. 
    // The cast to unsigned int is for portability, to avoid potential issues with 
    // left-shifting a negative number, although not strictly necessary here.
    unsigned int msb_mask = 1U << (sizeof(int) * CHAR_BIT - 1);
    
    // Perform bitwise AND with the mask.
    // If num is negative, the result will be non-zero (equal to msb_mask).
    // If num is non-negative, the result will be zero.
    return (num & msb_mask) != 0;
}

int main() {
    int num1 = -10;
    int num2 = 20;
    int num3 = 0;

    printf("%d is negative: %s\n", num1, is_negative_and(num1) ? "Yes" : "No");
    printf("%d is negative: %s\n", num2, is_negative_and(num2) ? "Yes" : "No");
    printf("%d is negative: %s\n", num3, is_negative_and(num3) ? "Yes" : "No");

    return 0;
}
```

Output:

```text
-10 is negative: Yes
20 is negative: No
0 is negative: No
```
