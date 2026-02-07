#include <iostream>
#include <string>
using namespace std;

void PatternMatching(string STR1, string STR2) {
    int n = STR1.length();
    int m = STR2.length();

    int i = 0;

    while (i <= n - m) {
        int c = 0;

        // compare characters
        for (int j = 0; j < m; j++) {
            if (STR1[i + j] == STR2[j]) {
                c++;
            }
        }

        // if all characters match
        if (c == m) {
            cout << "Found" << endl;
            return;
        }

        i++;
    }

    cout << "Not Found" << endl;
}

int main() {
    string STR1, STR2;

    cout << "Enter the main string: ";
    cin >> STR1;

    cout << "Enter the pattern string: ";
    cin >> STR2;

    PatternMatching(STR1, STR2);

    return 0;
}
