#include <iostream>
using namespace std;

int main() {
    char STR[100], STREx[200];  // STREx must be large enough

    cout << "Enter first string (STREx): ";
    cin.getline(STREx, 200);

    cout << "Enter second string (STR): ";
    cin.getline(STR, 100);

    int i = 0, j = 0;

    // Find end of STREx
    while (STREx[i] != '\0') {
        i++;
    }

    // Append STR to STREx
    while (STR[j] != '\0') {
        STREx[i] = STR[j];
        i++;
        j++;
    }

    // Add null character at the end
    STREx[i] = '\0';

    cout << "Concatenated string: " << STREx << endl;

    return 0;
}
