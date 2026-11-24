#include <iostream>
using namespace std;

// Function to print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main Function
int main() {

    int data1[] = {0, 1, -3, 9, 4, -8, -4, 2, 14};
    int data2[] = {23, 21, 28, 24, 30, 29, 14, 13, 11};
    int data3[] = {1, 5, 6, -5, 7, 9, 10, 12, -1, 3, -6, 8};

    int size1 = sizeof(data1) / sizeof(data1[0]);
    int size2 = sizeof(data2) / sizeof(data2[0]);
    int size3 = sizeof(data3) / sizeof(data3[0]);

    cout << "Dataset 1: ";
    printArray(data1, size1);

    cout << "Dataset 2: ";
    printArray(data2, size2);

    cout << "Dataset 3: ";
    printArray(data3, size3);

    return 0;
}