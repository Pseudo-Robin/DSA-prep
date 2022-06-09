#include <iostream>
#include <deque>

using namespace std;


int main() {

    deque<int> d;

    cout<<"Inserting elements from front as well as back : ";
    d.push_back(9);
    d.push_front(6);

    for(auto i:d) {cout<<i<<" ";}
    cout<<endl;

    // at(), front() and back()
    cout<<d.at(1)<<endl;
    cout<<d.empty()<<endl;
    cout<<d.front()<<endl<<d.back()<<endl;

    //erase() : but from where to where?
    d.erase(d.begin(),d.begin()+1);


    //Popping elements
    cout<<"Removing elements from front as well as back : "<<endl;
    d.pop_back();
    d.pop_front();

    for(auto i:d) {cout<<i;}



    return 0;
}