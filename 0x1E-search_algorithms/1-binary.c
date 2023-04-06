#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the start of the array
 * @size: size of the array (number of elements)
 *
 * Return: nothing
 */
void print_array(int *array, int size)
{
	// Declare a variable i to loop through the array.
	int i;

	// If the array is empty or its size is 0, return without doing anything.
	if (array == NULL || size == 0) {
		return;
	}

	// Print the message indicating that we're searching in the array.
	printf("Searching in array: ");

	// Loop through the elements in the array and print them separated by commas.
	for (i = 0; i < size; i++) {
		if (i == 0) {
			// If this is the first element, don't print a comma before it.
			printf("%d", array[i]);
		} else {
			// For all other elements, print a comma before them.
			printf(", %d", array[i]);
		}
	}

	// Print a newline character to end the message.
	printf("\n");
}

/**
 * binary_search - find value in sorted array using binary search method
 * @array: pointer to first element in array to be searched
 * @size: size of the array (number of elements)
 * @value: value to be searched for
 *
 * Return: index position of value or -1 if not found or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	// Declare variables for the low and high indices, as well as the middle index.
	int low = 0;
	int high = size - 1;
	int mid;

	// If the array is empty, its size is 0, or its first element is greater than the search value, return -1.
	if (array == NULL || size == 0 || array[0] > value) {
		return -1;
	}

	// While the low index is less than or equal to the high index...
	while (low <= high) {
		// Calculate the middle index.
		mid = (low + high) / 2;

		// Print the current section of the array being searched.
		print_array(&array[low], (high - low) + 1);

		// If the middle element matches the search value, return its index.
		if (array[mid] == value) {
			return mid;
		}

		// If the middle element is greater than the search value, search the left half of the array.
		if (array[mid] > value) {
			high = mid - 1;
		}

		// Otherwise, search the right half of the array.
		else {
			low = mid + 1;
		}
	}

	// If the value was not found in the array, return -1.
	return -1;
}
