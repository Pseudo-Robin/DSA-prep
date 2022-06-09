#include <iostream>
#include <queue>

using namespace std;


int main() {

    queue<string> q;

    q.push("robin");
    q.push("singh");
    q.push("ftw");

    cout<<"size before pop" << q.size()<<endl;
    cout<<"First Element"<<q.front()<<endl;
    q.pop();

    cout<<q.front()<<endl;

    cout<<"Size after Pop : "<<q.size();

    return 0;
}