#include <iostream>

// Here when we pass an array to the "update()" then the updated values are reflected in both scope, as when we pass "arr" inside
// the "update(arr,3)", we are actually passing the base address of the array denoted by arr, hence this is pass by address. 

using namespace std;

void update (int arr[] , int size ) {

    cout << "inside the function"<<endl;

    //updating the array
    arr[0] = 1000;

    for(int i=0; i <size;i++) {
        cout << arr[i] << " ";
    }

    cout<<endl;

    cout<<"going back to main"<<endl;;
}


int main() {

    int arr[3] = {5,4,3};

    update (arr, 3);

    for (int i=0;i<3;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}