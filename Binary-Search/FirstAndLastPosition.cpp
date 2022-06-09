#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> arr = {1,2,3,3,3,4,5};
    int target =3;

    // leftmost and rightmost occurences of the target in the array

    // this is leftmost occurence similarly write for rightmost occurence
    int s=0;
    int e=arr.size()-1;

    int mid = (s+e)/2;

    int ans1,ans2;

    while (s<=e) {

        if(arr[mid]==target) {
            ans1 = mid;
        
            e = mid - 1;
        }

        if(arr[mid] > target) {
            e = mid - 1;
        }

        else if (arr[mid] < target) {
             s = mid + 1;
        }

        mid = (s+e)/2;
    }

    cout<<ans1;;



    return 0;
}