#include <iostream>
#include <string>
#include <vector>

using namespace std;


    void compress(vector<char>& chars) {
        
        vector<char> ans;
        
        int count =0;
        
        for(int i=0;i<chars.size();i++) {
            i+=count;
            int head=chars[i];
            
            //append the character
            ans.push_back(head);
            
            count=0;
            
            for(int j=0;j<chars.size();j++) {
                if(chars[j]==head) {
                    count++;
                }
            }
            
            //append the character count
            
            ans.push_back(int(count));
            
        }
        
        for(int i=0;i<ans.size();i++) {
            cout<<ans[i]<<" ";
        }

    }


    int main() {

        vector<char> vc = {'a','a','b','b','b','b','b'};

        compress(vc);

        return 0;
    }
