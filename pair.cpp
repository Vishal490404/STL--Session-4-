#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p = {20,4};

    cout<<"This is p: "<<p.first<< " "<<p.second<<endl;

    pair<int,int> p1 = {1,2};

    cout<<"This is p1: "<<p1.first<< " "<<p1.second<<endl;

    p1.swap(p);

    cout<<"This is p1: "<<p1.first<< " "<<p1.second<<endl;
    cout<<"This is p: "<<p.first<< " "<<p.second<<endl;


    pair<int ,pair<int,int>> c={1,{1,2}};// 1-> {1,2}
    cout<<"This is c: "<<c.first<<" "<<c.second.first<<" "<<c.second.second<<endl;


    pair<int,int> arr[]={{1,2},{3,5},{5,600}};
    cout<<"This is arr: " <<arr[1].first;

    
}