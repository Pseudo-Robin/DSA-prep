#include<iostream>
using namespace std;

int main() {


    int arr[5] = {1,6,4,32,4};

    int n = sizeof(arr)/sizeof(int);

    int temp=0;

    for(int i=0; i<n/2;i++){

        int temp = arr[n-i-1];
        arr[n-i-1] = arr[i]; 
        arr[i] = temp;
    }


    for(int i=0; i<n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}