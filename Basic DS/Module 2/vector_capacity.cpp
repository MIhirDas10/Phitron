#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl;

// ------------------ push back ----------------------
// by push back -> we can add to vector and increase the size
    // vector<int> v;
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(20);
    // cout<<v.capacity()<<endl;
    // v.push_back(30); // capacity er baire  
    //                  // chole gele double koro
    // cout<<v.capacity()<<endl;
    // v.push_back(40);
    // cout<<v.capacity()<<endl;
    // v.push_back(50);
    // cout<<v.capacity()<<endl;
    
    // size = 2 over --- that's why 2*2 = 4
    // size = 4 over --- that's why 4*2 = 8
    // size = 8 over --- that's why 8*2 = 16
    // size = 16 over --- that's why 16*2 = 32
    // and so on...
// --------------------------------------------- 
// ------------- clear -------------------------
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.clear(); // deletes (doesn't clear internal memory)
    // cout<<v.size();
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
// --------------------------------------------- 
// -------------- resize -----------------------
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    v.resize(2);
    v.resize(7, 100); // default 0 

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
// --------------------------------------------- 
    return 0;
}