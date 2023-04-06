#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - find value in an array using linear search method
 * @array: pointer to first element in array to be searched
 * @size: size of the array (number of elements)
 * @value: value to searched for
 *
 * Return: 1st index where value is located or -1 if not found or array is null
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
   
  // If the array is empty or its size is 0, return -1.
if (array == NULL || size == 0) {
    return -1;

}
// Loop through each element in the array.
for (i = 0; i < size; i++) {
    // Print the current element being checked.
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    
    // If the current element matches the given value, return its index.
    if (array[i] == value) {
        return i;
    }
}

// If the value was not found in the array, return -1.
return -1;
}
