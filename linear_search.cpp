#include<iostream>
using namespace std;

int main(){

// n is the number of array elements
int key , n;

cout<< "enter the number of elements:";
cin >> n;

int arr [n];
// loop for take input
cout<<"the elements are:";
for(int i=0; i<n; i++){
    cin>> arr[i];
}

// key for found the element
cout<< "enter the element for found:" ;
cin>> key;

bool found = false ;

// for check one by one
 for( int i=0 ; i<n; i++){

    // for match
    if (arr[i]==key){
        cout<< " found the element at index:" << i;
        found = true;
        break;
    }

    }
       if (!found){
        cout<< "not found";
 }

 return 0;

}


