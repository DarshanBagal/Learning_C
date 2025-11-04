#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;    // pointer
    int i;

    p = arr;

    printf("Array elements using pointer:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d = %d\n", i, *(p + i));  
        // *(p+i) arr[i] hota hai
    }

    return 0;
}

