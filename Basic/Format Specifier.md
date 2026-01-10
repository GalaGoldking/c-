The format specifier in C is used to tell the compiler about the type of data to be printed or scanned in input and output operations. They always start with a % symbol and are used in the formatted string in functions like printf(), scanf, sprintf(), etc.

The C language provides a number of format specifiers that are associated with the different data types such as %d for int, %c for char, etc.

# List of format specifiers

| Format Specifier | Description |
| --- | --- |
| %c | For character type (char) |
| %d | For signed integer type (int) |
| %e or %E | For scientific notation of floats |
| %f | For float type |
| %g of %G | For float type with the current precision |
| %i | Signed integer |
| %ld or %li | Long |
| %lf | Double | 
| %Lf | Long double |
| %lu | Unsigned int or unsigned long |
| %lli of %lld | Long long |
| %llu | Unsigned long long |
| %o | Octal representation |
| %p | Pointer |
| %s | String |
| %u | Unsinged int |
| %x of %X | Hexadecimal representation |
| %n | Prints nothing |
| %% | Prints % character |

# C format specifier examples

## Character format specifier - %c in C

The %c is the format specifier for the char data type in C language. It can be used for both formatted input and formatted output in C language.

```C
#include <stdio.h>

int main(){
    char c;

    scanf("%c", &c);

    printf("The entered character: %c", c);
    return 0;
}
```

## Integer Format Specifier (signed) - %d in C

We can use the signed integer format specifier %d in the scanf() nad printf() functions for signed integer type values

```C
#include <stdio.h>

int main(){
    int x;

    scanf("%d", &x);

    printf("Printed using %%d: %d\n", x);
    printf("Printed using %%i: %i", x);
    return 0;
}s
```

## Unsinged Integer Format Specifier - %u in C

The %u is the format specifier for the unsigned integer data type. If we specify a negative integer value to the %u, it converts the integer to its 2's complement

```C
#include <stdio.h>

int main(){
    unsigned int var;
    scanf("%u", &var);
    printf("Unsigned integer: %u\n", var);

    // trying to print negative value using %u
    printf("Printing -10 using &&u\n". -10);
    return 0;
}
```

## Floating-point format specifier - %f in C

The %f is the floating-point format specifier in C language that can be used inside the formatted input and output of float data type. Apart from %f, we can use %e or %E format specifiers to print the floating-point value in the exponential form.

```C
#include <stdio.h>

int main(){
    float a = 12.67;
    printf("Using %%f: %f\n", a);
    printf("Using %%e: %e\n", a);
    printf("Using %%E: %E", a);
    return 0;
}
```

Output:

```
Using %f: 12.670000
Using %e: 1.267000e+01
Using %E: 1.267000E+01
```

## Unsigned Octal number for integer - %o in C

We can use the %o format specifier in the C program to print or take inout for the unsigned octal integer number

```C
#include <stdio.h>

int main(){
    int a = 67;
    printf("%o\n", a);
    return 0;
}
```

Output:

```
103
```

## Unsigned Hexadecimal for integer - %x in C

The %x format specifier is used in the formatted string for hexadecimal integers. In this case, the alphabets in the hexadecimal numbers will be in lowercase. For uppercase digits, we use %X instead

```C
#include <stdio.h>

int main(){
    int a = 15454;
    printf("%x\n", a);
    printf("%X", a);
    return 0;
}
```

Output:

```
3c5e
3C5E
```

## String Format Specifier - %s in C

The %s in C is used to print strings or take strings as input

```C
#include <stdio.h>

int main(){
    char a[] = "Hi, Geeks";
    printf(%s", a);
    return 0;
}
```

Example: The working of %s with scanf() is a little bit different from its working with printf(). Let's understand this with the help of following C program

```C
#include <stdio.h>

int main(){
    char str[50];

    //taking string as input
    scanf("%s", str
}
```

Output

```
Hi Geeks (Enter by user)
Hi
```

As we can see, the string is only scanned till a whitespace is encountered. We can avoid that by using scansets in C.

## Address Format Specifier - %p in C

The C language also provides the format specifier to print the address/pointers. We can use %p to print addresses and pointers in C

```C
#include <stdio.h>

int main(){
    int a = 10;
    printf("The Memory Address of a: %p:, &a);
    return 0;
}
```

Output:

```
The Memory Address of a: 0x7ffe6f71e60c
```

## Input and Output Formatting

C language provides some tools using which we can format the input and output. They are generally inserted between the % sign and the format specifier symbol Some of them are as follows:

- A minus(-) sign tells left alignment.
- A number after % specifies the minimum field width to be printed if the characters are less than the size of the width the remaining space is filled with space and if it is greater then it is printed as it is without truncation.
- A period( . ) symbol separates field width with precision.

Precision tells the minimum number of digits in an integer, the maximum number of characters in a string, and the number of digits after the decimal part in a floating value.


```C
#include <stdio.h>
int main()
{
    char str[] = "geeksforgeeks";
    printf("%20s\n", str);
    printf("%-20s\n", str);
    printf("%20.5s\n", str);
    printf("%-20.5s\n", str);
    return 0;
}
```

Output

```
       geeksforgeeks
geeksforgeeks       
               geeks
geeks               
```
