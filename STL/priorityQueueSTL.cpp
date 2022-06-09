#include <iostream>
#include <queue>
using namespace std;


int main() {

    // by deafault max heap priority queue is made
    // i.e, always the max value from the pq is fetched

    priority_queue<int> max_pq;


    //min heap
    priority_queue<int, vector<int>, greater<int>> min_pq;

    max_pq.push(1);
    max_pq.push(5);
    max_pq.push(3);

    int n = max_pq.size();

    cout<<" Max Heap - Priority Queue : ";
    for(int i=0;i<n;i++) {
        cout<<max_pq.top();
        max_pq.pop();
    }

    cout<<endl<<endl;

    min_pq.push(1);
    min_pq.push(5);
    min_pq.push(3);

   

    
    cout<<" Min Heap - Priority Queue : ";
    for(int i=0;i<n;i++) {
        cout<<min_pq.top();
        min_pq.pop();
    }


    return 0;
}