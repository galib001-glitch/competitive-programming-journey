#include <iostream>
using namespace std;

int main() {
    char STR1[100], SubSTR[100];
    int n, m;
    cout<<"input the first string:";
    cin.getline(STR1, 100);
    cout<<endl;
    cout<<"starting position (index):";
    cin >> m;
    cout<<endl;
    cout<<"number of characters to copy:";
    cin>>n;
    cout<<endl;

    int i = m, j = 0;

    while (STR1[i] != '\0' && n > 0) {
        SubSTR[j] = STR1[i];
        i++;
        j++;
        n--;
    }

    SubSTR[j] = '\0';

    cout << "Substring: " << SubSTR;
    return 0;
}
