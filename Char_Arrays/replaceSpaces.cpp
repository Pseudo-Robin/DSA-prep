#include <iostream>
#include <string>

using namespace std;

// Need to replace all the spaces with string "@40"

int main() {
    string str = "My name is Robin Singh";

    string space_replacement="@40";

    for(int i=0;str[i]!='\0';i++) {
        if(str[i]==' ') {
            str.replace(i,1,space_replacement);
        }
    }

    cout<<str;

    return 0;
}


//Another Method using extra space
/*
string replaceSpaces(string &str){
	string ans = "";
    for(int i=0;str[i]!='\0';i++) {
        if(str[i]==' ') {
            ans.push_back('@');
            ans.push_back('4');
            ans.push_back('0');
        }
        else {
            ans.push_back(str[i]);
        }
    }
    
    return ans;
}

*/