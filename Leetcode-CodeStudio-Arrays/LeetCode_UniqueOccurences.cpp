/* GIven an array with elements, check the frequence of all the unique elements, and if all the
 frequencies are unique return true */


#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    int arr[6]={5,1,5,1,1,5};

    map<int,int> mp;

    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        mp[arr[i]]++;
    }

    set<int> st;

    for(auto it:mp) {
        st.insert(it.second);
    }

    if(mp.size()==st.size()) {
        cout<<"all elements have unique occurences";
    }
    else cout<<"not unique occurences";
}