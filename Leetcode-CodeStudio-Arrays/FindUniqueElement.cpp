// Finding the only unique element in an array when ever other elment occurs twice


#include <iostream>
using namespace std;


int main() {

    int arr[5] = {5,3,2,3,2};
    int n=5;

    int ele=0;

    for(int i=0;i<n;i++) {
        ele^=arr[i];
    }

    cout<<ele;

    return 0;
}