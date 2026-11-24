#include <iostream>
using namespace std;

int linearsearch(int A[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (A[i] == target) {
            return i;
        }
    }
    return -1;

}

int main() {
    int num[5] = {3,5,6,8,9};

    int arraysize = sizeof(num)/sizeof(num[0]);

    cout << "Enter the number you want to search:";
    int search;
    cin >> search;

    int found = linearsearch(num, arraysize, search);

    if (found == -1) {
        cout << "Number did not exist in the array" << endl;
    } else {
        cout << "Number exist at index of: " << found << endl;
    }

    return 0;
}