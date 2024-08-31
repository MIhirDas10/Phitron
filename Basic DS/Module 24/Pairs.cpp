#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int>& a, pair<string, int>& b){
    if(a.first == b.first){ // if string same -> Descending order
        return a.second > b.second;
    }
    else{ // Ascending order
        return a.first < b.first;
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<string, int>> students;
    while(n--){
        string name;
        int score;
        cin>>name>>score;
        students.push_back({name, score}); // pushing pairs
    }
    sort(students.begin(),students.end(),cmp); // sorting
    for(auto it:students){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}