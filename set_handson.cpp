#include <bits/stdc++.h>

using namespace std;

int main(){
    //erase,emplace
    // set<int>squares;
    // squares.insert(1);
    // squares.insert(1);
    // squares.insert(0);
    // for(auto& x:squares){
    //     cout<<x<<" ";
    // }
    map<vector<int>,int>mp;
    vector<vector<int>>v;
    vector<int>v1(5,0);
    vector<int>v2(5,0);
    vector<int>v3(6,0);
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    for(auto& x:v){
        mp[x]++;
    }
    for(auto& x:mp){
        cout<<x.second<<" ";
    }
    return 0;

}