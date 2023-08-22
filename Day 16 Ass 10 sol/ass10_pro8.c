// 8.   C   Program   to   Find   Largest   Number   from   an   array.   Array   must   be   declared   using DynamicMemory Allocation.

#include <stdio.h>
#include <stdlib.h>

int findLargestNumber(int *array, int size)
{
    int largest = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }

    return largest;
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *array = (int *)malloc(size * sizeof(int));

    if (array == NULL)
    {
        printf("Memory allocation failed.\n");
        return 0;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int largestNumber = findLargestNumber(array, size);
    printf("The largest number in the array is: %d\n", largestNumber);

    free(array);

    return 0;
}
