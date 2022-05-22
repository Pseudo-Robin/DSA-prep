
// Using 3 Pointers approach

/*
class Solution {
public:
    vector<int> sortColors(vector<int>& arr) {
        
        int l=0;
        int m=0;
        int h=arr.size()-1;
        
        
        while(m<=h) {
            if(arr[m]==2) {
                swap(arr[m],arr[h]);
                h--;
            }
            
            else if(arr[m]==1) {
                m++;
            }
            
            else {
                swap(arr[m],arr[l]);
                l++;m++;
            }
        }
        
        
        return arr;
        
        
    }
};

*/