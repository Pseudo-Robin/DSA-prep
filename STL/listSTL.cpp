#include <iostream>
#include <list>

//implemented using doubly linked list

using namespace std;

int main() {

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(auto i:l) {cout<<i;}

    cout<<endl<<endl;

    //erase() : O(n)
    l.erase(l.begin());
    for(auto i:l) {cout<<i;}

    cout<<endl<<endl;

    //initializing with values
    list<int> l2 (5,500);
        for(auto i:l2) {cout<<i<<" ";}



    return 0;
}