#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    pair<int ,pair<int,int>> c={1,{1,2}};
    cout<<c.first<<" "<<c.second.first<<" "<<c.second.second;
    pair<int,int> arr[]={{1,2},{3,5},{5,600}};
    cout<<arr[1].first;
    return 0;
}