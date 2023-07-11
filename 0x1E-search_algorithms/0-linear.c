#include "search_algos.h"

/**
  task 0
  */

int linear_search(int* array, size_t size, int value) {
    if (array == nullptr) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        std::cout << "Comparing " << array[i] << " with " << value << std::endl;
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {10, 25, 8, 14, 3};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int value = 14;

    int index = linear_search(arr, size, value);

    if (index != -1) {
        std::cout << "Value " << value << " found at index " << index << std::endl;
    } else {
        std::cout << "Value " << value << " not found in the array" << std::endl;
    }

    return 0;
}
