#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeOccurrences(string str, string part) {
        
        int part_length = part.length();
        
        while(isOccurencePresent(str,part)) {
           int pos = str.find(part);
           str.replace(pos,part_length,"");
        }
        
        return str;
    }
    
    bool isOccurencePresent(string str, string part) {
        
        if(str.find(part)!=-1) {
            return true;
        }
        return false;
    }
};