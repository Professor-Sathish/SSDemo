#include <stdio.h>
#include <assert.h>
#include <string.h>

// Function prototypes
void selectionSort(int arr[], int n);
void testSelectionSort();

// Main function to run tests
int main() {
    testSelectionSort();
    printf("✅ All test cases passed!\n");
    return 0;
}

// Function to test selection sort
void testSelectionSort() {
    int arr1[] = {64, 25, 12, 22, 11};
    int expected1[] = {11, 12, 22, 25, 64};
    selectionSort(arr1, 5);
    assert(memcmp(arr1, expected1, sizeof(expected1)) == 0);

    int arr2[] = {5, 4, 3, 2, 1};
    int expected2[] = {1, 2, 3, 4, 5};
    selectionSort(arr2, 5);
    assert(memcmp(arr2, expected2, sizeof(expected2)) == 0);

    int arr3[] = {1, 2, 3, 4, 5};
    int expected3[] = {1, 2, 3, 4, 5};
    selectionSort(arr3, 5);
    assert(memcmp(arr3, expected3, sizeof(expected3)) == 0);

    int arr4[] = {100, -50, 0, 50, -100};
    int expected4[] = {-100, -50, 0, 50, 100};
    selectionSort(arr4, 5);
    assert(memcmp(arr4, expected4, sizeof(expected4)) == 0);
}
