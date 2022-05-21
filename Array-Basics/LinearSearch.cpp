#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int key) {

    for(int i=0;i<size;i++){
        if(arr[i] == key) {
            return true;
        }
    }

    return false;
}


int main() {

    int arr[5] = {3,1,4,-1,4,};
    int size = sizeof(arr)/sizeof(int);

    int key;

    cout << "Enter the key";
    cin >> key;

    bool found = LinearSearch(arr,size,key);

    if (found) {
        cout<<"Found the key";
    }

    if(!found){
        cout<<"Did not find the key";
    }

}