#include <iostream>
#include <map>


using namespace std;


int main() {

    map <int,string> mp;

    mp[1] = "robin";
    mp[13] = "19BIT0265";
    mp[2] = "singh";

    //before erase
    cout<<"before erase"<<endl;
    for(auto i:mp) {
        cout<<i.first<<" --> "<<i.second<<endl;
    }

    //insertion
    mp.insert( {5,"bheem"} );

    //count()
    cout<<endl<<"finding 13 -> "<<mp.count(13)<<endl;

    
    // after erase()
    mp.erase(13);

    cout<<endl<<"after erase "<<endl;

    for(auto i:mp) {
        cout<<i.first<<" --> "<<i.second<<endl;
    }

    cout<<endl<<endl;

    //find() - returns an iterator    -    O(logn)
    auto it = mp.find(5);
    cout<<(*it).second;

    cout<<endl<<endl;

    cout<<"printing elements after iterator pointer"<<endl;
    for(auto i = it;i!=mp.end();i++){
        cout<<(*i).first<<endl;
    }
    

    return 0;
}