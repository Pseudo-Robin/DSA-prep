#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& str) {
        
        //Using 2 pointers approach
        
        int size = str.size();
        
        int s=0;
        int e=size-1;
        
        while(s<=e) {
            swap(str[s++],str[e--]);
        }
        
    }
};