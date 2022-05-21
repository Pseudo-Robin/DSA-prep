#include <iostream>

using namespace std;

//constraint => 1 <= arr[i] <= N-1


int FindDuplicate(int arr[], int size) {

    int ans=0;

    for(int i=0;i<5;i++) {
        ans=ans^arr[i];
    }

    for(int i=1;i<5;i++){
        ans=ans^i;
    }

    return ans;

}

int main() {

    int arr[5]={4,2,1,3,1};

    cout<<FindDuplicate(arr,5);
    return 0;
}