#include <iostream>
#include <vector>
using namespace std;

//HOLD

void MaxMinElementInArray(int arr[], int size) {

int maxi=INT32_MIN;
int mini =INT32_MAX;

for(int i=0;i<size;i++) {

    maxi = max(maxi,arr[i]);

    mini = min(mini,arr[i]);
}

cout << maxi << endl << mini;

}


int main() {

int size;
cin>>size;

int arr[10000];

for(int i=0;i<size;i++) {
    cin>>arr[i];
}

MaxMinElementInArray(arr,size);

cout<<endl<<endl<<endl;

return 0;
}