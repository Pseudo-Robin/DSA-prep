#include <iostream>
#include <vector>
using namespace std;

//applies only to monotonic functions, i.e values either in increasing or decreasing order

int main() {

    vector <int> arr = {3,5,9,13,27};

    int n = arr.size();
    int key = 9 ;

    int s=0;
    int e=n-1;

    int mid = (s+e)/2;


    while(s<=e) {

        if(arr[mid] == key) {
            cout<< mid;
            break;
        }

        else if(arr[mid] > key) {
            e=mid-1;
        }

        else {
            s=mid+1;
        }

        mid = (s+e)/2;
    }

    return 0;
}