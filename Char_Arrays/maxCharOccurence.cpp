#include <iostream>
#include <string>

using namespace std;


int main() {
    string str = "Robinn Singh";

    int arr[26]={0};
    int num_val=0;

    for(int i=0;str[i]!='\0';i++) {
        
        if(str[i]>='a'&&str[i]<='z') {
            num_val=str[i]-'a';
        }
        else {
            num_val=str[i]-'A';
        }

        arr[num_val]++;
    }

    int max=0;
    int index;

    for(int i=0;i<26;i++) {
        if(arr[i]>max) {
            max=arr[i];
            index=i;
        }    
    }

    char final_ans = 'a' + index;

    cout<<final_ans;


    return 0;
}


