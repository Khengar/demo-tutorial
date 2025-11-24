#include <iostream>

// The function now correctly accepts the array's size as a parameter
void selectionSort(int arr[], int size) {
    int min_index;
    for (int i = 0; i < size - 1; i++) {
        min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

// The main function must be spelled 'main' in all lowercase
// and it must return an int.
int main() {
    int arr[] = {2, 4, 3, 5, 7, 8, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}