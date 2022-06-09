#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> BubbleSort (vector<int> arr, int n) {

    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }

    return arr;

}


int main() {

    vector<int> arr = {4,2,4,15,5,1,3};
    int n = arr.size();

    vector<int> ans;

    ans = BubbleSort(arr,n);

    for(int i=0;i<n;i++) {
        cout<<ans[i]<<" ";
    }


    return 0;
}