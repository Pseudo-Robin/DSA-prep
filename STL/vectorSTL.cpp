#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v = {1,2,3,4,5,1,2,3};

    cout<<v.capacity()<<endl<<v.size()<<endl;

    v.push_back(2);

    cout<<v.capacity()<<endl<<v.size()<<endl;


    //iterator
    for(auto i:v) {
        cout<<i;
    }
    cout<<endl;


    //initializing a vector with a certain value (by default it gets intitalized with zeros)
    vector<int> v2(5,1);
    for(auto i:v2) { cout<<i; } 




    return 0;
}