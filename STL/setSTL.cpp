#include <iostream>
#include <set>
// uses BST

using namespace std;

// stores only unique elements
// i.e, duplicates are not stored


int main() {

    set<int> s;
    s.insert(5);           // insert()   -   O(n)
    s.insert(5);           // because of BST
    s.insert(6);
    s.insert(7);
    s.insert(7);
    s.insert(6);

    for(auto i:s) {cout<<i<<endl;}
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i:s) {cout<<i<<endl;}
    cout<<endl;

    //count() : if element is present or not, returns bool value
    cout<<"Is element 5 present? ";
    cout<<s.count(5)<<endl<<endl;;

    //find() : returns the iterator of that element
    cout<<"iterator of element 5 : ";
    
    set<int>::iterator it1 = s.find(5);
    cout<<*it1;
    

    return 0;
}