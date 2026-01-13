# Syntax

```C
condition ? operation if true : operation if false;
```

# Using with return

```C
int findMax(int a, int b) {
    return (a > b) ? a : b;
}
```

# Using with printf

```C
int main(){
    printf("%d", (a > b) ? a : b);
}
```

# Else if ternary

```C
char grade = (score >= 90) ? 'A' :
             (score >= 80) ? 'B' :
             (score >= 70) ? 'C' :
                             'D';
```
