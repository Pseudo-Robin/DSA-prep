#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// best case and worst case - O(n^2)



vector<int> SelectionSort(vector<int> arr, int n) {

    for(int i=0;i<n;i++) {

        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }

    return arr;

}

int main() {

    vector<int> arr = {1,5,5,4,2,2,1};
    int n = arr.size();

    vector<int> ans = SelectionSort(arr,n);


    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    

    return 0;
}