#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ----- === HEAP SORT === -----

    // -------- max heap --------
    // priority_queue<int> pq;
    // -------- min heap --------
    priority_queue<int, vector<int>, greater<int>> pq;
    // greater<int>() <- () can't be there
    while(true){
        int c;
        cin>>c;
        if(c == 0){ // insert
            int x;
            cin>>x;
            pq.push(x); // O(logN)
        }
        else if(c == 1){ // delete
            pq.pop(); // O(logN)
        }
        else if(c == 2){ // top value
            cout<<pq.top()<<endl; // O(1)
        }
        else{
            break;
        }
    }
    return 0;
}