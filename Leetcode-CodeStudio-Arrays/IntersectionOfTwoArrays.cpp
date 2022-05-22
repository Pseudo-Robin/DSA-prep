#include <algorithm>
#include <chrono>
#include <iostream>
#include <iterator>
#include <memory>
#include <string>
#include <vector>
using namespace std;


// OPTIMIZED 2 POINTER APPROACH
/*
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
	int i=0,j=0;
	
	while(i<n && j<m) {
		if(arr1[i] <arr2[j]) {
			i++;
		}
		
		else if(arr1[i]>arr2[j]) {
			j++;
		}
		
		else {
			ans.push_back(arr1[i]);
			i++;j++;
		}
	}
	
	return ans;
}  
*/


// BRUTE FORCE

int main() {
    vector<int> arr1 = {1,2,2,2,4,6};
    vector<int> arr2 = {2,2,4,4,4,4,4};

    vector<int> ans;

    for(int i=arr1.size()-1;i>=0;i--) {
        for(int j=arr2.size()-1;j>=0;j--) {
            if(arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);
                arr2[j] = INT16_MIN;
                break;
            }
        }
    }

    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }

    return 0;
}