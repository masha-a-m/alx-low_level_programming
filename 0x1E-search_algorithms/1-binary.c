#include "search_algos.h"

/**
   binary_search(int *array, size_t size, int value);
Where array is a pointer to the first element of the array to search in
size is the number of elements in array
And value is the value to search for
Your function must return the index where value is located
You can assume that array will be sorted in ascending order
You can assume that value won’t appear more than once in array
*/

int binary_search(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        std::cout << "Searching subarray: ";
        for (int i = left; i <= right; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int value = 11;
    int index = binary_search(arr, size, value);
    if (index != -1)
        std::cout << "Value " << value << " found at index " << index << std::endl;
    else
        std::cout << "Value " << value << " not found in the array" << std::endl;

    return 0;
}
