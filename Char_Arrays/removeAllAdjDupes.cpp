#include <iostream>
#include <string>


using namespace std;


class Solution {
public:
    
    bool isDuplicate(string s) {
        for(int i=0;i<s.length()-1;i++) {
            if(s[i]==s[i+1]) {
                return true;
            }
        }
        return false;
    }
    
    
    string removeDuplicates(string s) {
        
        while(isDuplicate(s)) {
            for(int i=0;i<s.length()-1;i++) {
            if(s[i]==s[i+1]) {
                s.erase(i,1);
                s.erase(i,1);
            }
        }
            
    }
        return s;
    }
        
};