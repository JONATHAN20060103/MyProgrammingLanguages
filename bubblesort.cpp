#include <iostream>
using namespace std;

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};

    int size = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array in Ascending Order: " << endl;
    printArray(data, size);

    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order: " << endl; 
    printArray(data, size);

    return 0;
}