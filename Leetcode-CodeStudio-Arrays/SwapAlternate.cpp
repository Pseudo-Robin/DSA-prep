#include <iostream>
using namespace std;

void SwapAlternateElements(int arr[], int size) {

     for(int i=0;i<size-1;i+=2){
        
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }


}

int main() {

    int arr1[5]={1,2,7,5,9};
    int arr2[6]={5,7,4,3,6,8};

    int n1=5;
    int n2=6;

   SwapAlternateElements(arr1,n1);
   SwapAlternateElements(arr2,n2);

    for(int i=0;i<n1;i++){
        cout<<arr1[i];
    }

    cout<<endl<<endl;

    for(int i=0;i<n2;i++){
        cout<<arr2[i];
    }

    return 0;
}