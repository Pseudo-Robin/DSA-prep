#include <iostream>
#include <stack>

using namespace std;


int main() {

    stack<string> s;

    s.push("robin");
    s.push("singh");
    s.push("ftw");


    cout<<s.top()<<endl;

    s.pop();

    cout<<s.top()<<endl;

    cout<<s.size()<<endl;

    s.pop();
    s.pop();

    cout<<"empty or not : "<<s.empty();



    return 0;
}