#include <iostream>
using namespace std;

int Sum(int arr[],int size) {

    int sum=0;
    for(int i=0;i<size;i++) {
        sum+=arr[i];
    }
    return sum;
}


int main() {

int size;
cin>>size;

int arr[1000];

for(int i=0;i<size;i++) {
    cin>>arr[i];
}

cout<<Sum(arr,size);
    return 0;
}