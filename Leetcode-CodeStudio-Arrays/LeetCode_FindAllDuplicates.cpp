#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


// METHOD-1     O(N^2) + O(1)

/*
int main() {

    vector<int> arr{4,3,2,7,8,2,3,1};
    // o/p = {3,2}

    vector<int> ans;
    
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[j]==arr[i]){
                ans.push_back(arr[i]);
                break;
            }
            else {continue;}
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }


    return 0;
}
*/


// METHOD-2     O(N*LOGN) + O(1)

/*
int main() {

    vector<int> arr = {4,3,2,7,8,2,3,1};
    vector<int> ans;

    //sort the array
    sort(begin(arr),end(arr));

    for(int i=0;i<arr.size();i++) {
        if(arr[i]==arr[i+1]) { ans.push_back(arr[i]); i++; }
        else {
            continue;
        }
    }


    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;

} */


// METHOD-3      O(N) + O(N)

/*
int main() {

    vector<int> arr = {4,3,2,7,8,2,3,1};
    vector<int> ans;

    unordered_map<int,int> mp;

    for(int i=0;i<arr.size();i++) {
        mp[arr[i]]++;
    }

    for(auto it:mp) {
        if(it.second==2) {
            ans.push_back(it.first);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;

} */


// METHOD-4      O(N) + O(1)

/*
int main() {
    vector<int> arr={4,3,2,7,8,2,3,1};
    vector<int>ans;

    for(int i=0;i<arr.size();i++) {
        if(arr[abs(arr[i])-1] < 0) {
            ans.push_back(abs(arr[i]));
        }
        else {
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
    }

    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
}
*/


