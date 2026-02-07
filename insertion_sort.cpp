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

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int temp = A[i];
        int j = i - 1;

        while (j >= 0 && temp < A[j]) {
            A[j + 1] = A[j];
            j = j - 1;
        }

        A[j + 1] = temp;
    }

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
