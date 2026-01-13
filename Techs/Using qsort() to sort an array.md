

```C
int compare( const void* a, const void b* ){
    int int_a = * ( (int*) a );
    int int_b = * ( (int*) b );

    if ( int_a == int_b ) return 0;
    else if ( int_a < int_b ) return -1;
    else return 1;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements

    // Using qsort()
    // Parameters: base address of array, number of elements, size of each element, comparison function
    qsort(arr, n, sizeof(arr[0], compare);

    return 0;
}
