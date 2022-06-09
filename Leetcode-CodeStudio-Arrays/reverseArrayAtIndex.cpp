#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    vector<int> v = {7,6,8,1,2};
    int m=3;    //inde after which the array needs to be reversed

    int n = v.size();

    int s=m+1;
    int e=n-1;

    while(s<=e) {
        swap(v[s],v[e]);
        s++; e--;
    }

    for(int i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }


    return 0;
}