#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1,str2;

    cout << "input the first array :";
    getline(cin,str1);

    cout << "input second string :";
    getline(cin,str2);

    str1.append(str2);
    cout << "Concatenated string: " << str1 << endl;
    return 0;
}