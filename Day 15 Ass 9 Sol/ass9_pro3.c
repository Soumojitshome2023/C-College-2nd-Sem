// 3. Write a C program to copy one array to another using pointers.

#include <stdio.h>

void copyArray(int *source, int *destination, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    int sourceArray[] = {1, 2, 3, 4, 5};
    int destinationArray[5];
    int size = sizeof(sourceArray) / sizeof(sourceArray[0]);
    int i;

    copyArray(sourceArray, destinationArray, size);

    printf("Source Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", sourceArray[i]);
    }
    printf("\n");

    printf("Destination Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");

    return 0;
}
