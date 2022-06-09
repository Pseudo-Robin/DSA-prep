#include <iostream>
#include <array>

using namespace std;
int main() {

    int basic[2] = {1,2};

    array<int,3> a = {1,2,3};

    int size = a.size();

    cout<<"Element at index 2 : "<<a.at(2)<<endl;

    cout<<"Front element : "<<a.front()<<endl;

    cout<<"Back element : "<<a.back()<<endl;

    cout<<"Is Empty? : "<<a.empty()<<endl;

    return 0;
}