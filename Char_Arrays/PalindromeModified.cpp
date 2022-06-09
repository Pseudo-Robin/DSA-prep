#include<iostream>
#include<string>

using namespace std;


bool isValid(char ch) {
    if(ch>='a'&&ch<='z' || ch>='A'&&ch<='Z' || ch>='0' && ch<='9') {
        return true;
    }
    return false;
}

char toLowercase(char ch) {
    if(ch>='A'&&ch<='Z') {
        return ch-'A'+'a';
    }
    
    return ch;
}

bool checkPalindrome(string s)
{    
    int size = s.length();
    
    int str=0;
    int e = size-1;

    while(str<=e) {

        char forward_ch = s[str];
        char backward_ch = s[e];

        if(!isValid(forward_ch)) {
            str++;
            continue;
        }

        if(!isValid(backward_ch)) {
            e--;
            continue;
        }

        if(toLowercase(forward_ch)!= toLowercase(backward_ch) )
            {
                return false;
            }
        str++;
        e--;
    }

    return true;


}

int main() {

    string s = "N2 i&nJA?a& jnI2n";

    if(checkPalindrome(s)) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    

    return 0;
}