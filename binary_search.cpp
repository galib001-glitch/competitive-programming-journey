#include<iostream>
#include <algorithm>
using namespace std;

int main(){

// n is the number of array elements
int key , n ;

cout<< "enter the number of elements:";
cin >> n;

int arr [n];
// loop for take input
cout<<"the elements are (sorted):";
for(int i=0; i<n; i++){
    cin>> arr[i];
}
    // Sort array
    sort(arr, arr + n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
// key for found the element
cout<< "enter the element for found:" ;
cin>> key;

int middle;

int low = 0;
int high = n-1;

bool found = false;

while (low <= high){
    middle = (low + high)/2;

    if ( arr [middle] == key){
        cout << "element found index:"<< middle;
        found = true;
        break;
    }
    else if(arr[middle] < key ){
        low = middle + 1;
    }
    else{
        high = middle -1;
    }

}

if(!found){
    cout<< "not found";
}
return 0;
}