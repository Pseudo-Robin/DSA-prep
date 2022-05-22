//CodeStudio - PairSum

// BRUTE FORCE   O(N^2)
/*
vector<vector<int>> pairSum(vector<int> &arr, int s){
   
	vector<vector<int>> ans;
	
	int n= arr.size();
	int temp=0;
	
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			temp=arr[i]+arr[j];
			if(temp==s) {
				
				vector<int> temp_v;
				temp_v.push_back(min(arr[i],arr[j]));
				temp_v.push_back(max(arr[i],arr[j]));
				
				ans.push_back(temp_v);
			}
		}
	}
	sort(ans.begin(),ans.end());
	return ans;
	
}
*/


// Unordered Map     O(N)  +  O(N)