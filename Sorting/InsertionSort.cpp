#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> InsertionSort(vector<int> arr, int n) {

    int first = arr[0];

    for(int i=1;i<n;i++) {
        int curr=arr[i];
        int j=i-1;

        while (arr[j]>curr && j>=0) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }

    return arr;

}

int main() {

    vector<int> arr = {1,5,5,4,2,2,1};
    int n = arr.size();

    vector<int> ans = InsertionSort(arr,n);


    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    

    return 0;
}