#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp; // key, value
    // mp.insert({"Shakib al hasan", 75});
    // mp.insert({"Tamim Iqbal", 19});
    // mp.insert({"Rahat", 100});
    // mp.insert({"Shamim", 79});


    // mp.insert({"akib", 79});
    // for(auto it = mp.begin(); it!=mp.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // cout<<mp["Shamim"]<<endl;
    // cout<<mp["akib"]<<endl;


    // insert
    mp["Shakib al hasan"] = 79;
    mp["akib"] = 80;
    mp["tamim"] = 100;
    // if(mp.count("akib")){
    //     cout<<"Yes"<<endl;
    // }
    // else cout<<"NO";

    for(auto it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}

// complexity = O(logN)
// n times = O(nlogN)