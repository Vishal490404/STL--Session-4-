#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v;

    vector<int> v1;
    vector<int> v2;

    v1.push_back(1);
    v1.push_back(1);
    v2.push_back(3);
    v2.push_back(3);
    v.push_back(v1);
    v.push_back(v2);

    for (auto vetr : v){
        for (auto it : vetr){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    // vector<pair>
    vector<pair<int,int>> vp;
    vp.push_back({1,2});
    for (auto it : vp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}