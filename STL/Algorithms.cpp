#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {

    vector<int> v = {5,2,1,3454,643,3};


    //  binary_search()   -   returns boolean value 0 or 1
    sort(v.begin(),v.end());    // based on intro sort : (quick + heap + insertion) sort

    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<endl<<endl;


    cout<<"Lower Bound and Upper Bound: "<<endl;

    // lower_bound() and upper_bound()  -  returns iterator 
    cout<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    cout<<endl<<endl;

    //Max and Min
    int a=5;
    int b=3;
    int c=1;   // does not works with 3rd variable

    cout<<"max of (5,3) :"<<max(a,b)<<endl;
    cout<<"min of (5,3) :"<<min(a,b);

    cout<<endl<<endl;

    //swapping
    swap(a,b);
    cout<<a;
    cout<<endl<<endl;


    //reversing a string
    string str = "robin singh";
    reverse(str.begin(),str.end());
    cout<<str<<endl<<endl;


    //rotating a vector
    vector<int> vec = {1,2,3,4,5,6};

    rotate(vec.begin(),vec.begin()+2,vec.end());
    cout<<"After rotate : "<<endl;

    for(auto i:vec) { cout<<i<<" "; }



    return 0;
}