#include<string>
#include<iostream>

using namespace std;


class Solution {
public:
    
    char toLowercase(char ch) {
        if(ch>='A'&&ch<='Z') {
            return ch-'A'+'a';
        }
        
        else {
            return ch;
        }
    }
    
    
    
    bool isValid(char ch) {
        if(ch>='a'&&ch<='z' || ch>='A'&&ch<='Z' || ch>='0'&&ch<='9') {
            return true;
        }
        
        else {
            return false;
        }
    }
        
        
        
    bool isPalindrome(string str) {
        
        int len = str.length();
        
        int s=0;
        int e=len-1;
        
        
        while(s<=e) {
            
            if(!isValid(str[s])) {
                s++;
                continue;
            }
            
            else if(!isValid(str[e])) {
                e--;
                continue;
            }
    
            else {
                if(toLowercase(str[s])!=toLowercase(str[e]))
                {return false;}
            }

            s++;
            e--;
        }
        
        return true;
        
    }
            

};