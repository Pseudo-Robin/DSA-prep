#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// USING TWO POINTERS

int main() {

    vector<int> arr = {1,1,0,0,0,0,1,0};

    int n=arr.size();

    int l = 0;
    int r = n-1;


    while(l<r) {

        if(arr[l]==0 ) {l++;}

        if(arr[r]==1 ) {r--;}

        if(arr[l] == 1 && arr[r] == 0 ) {
            swap(arr[l],arr[r]);
        }

    }


    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }



    return 0;
}