#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

     int A[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Optimized Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;   // check if any swap happens

        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                swapped = true; // mark swap happened
            }
        }

        // If no swap happened, array is sorted
        if (!swapped) {
            break;
        }
    }

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
