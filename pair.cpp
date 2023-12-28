#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p = {20,4};

    cout<<p.first<< " "<<p.second<<endl;

    pair<int,int> p1 = {1,2};

    cout<<p1.first<< " "<<p1.second<<endl;

    p1.swap(p);
    
    cout<<p1.first<< " "<<p1.second<<endl;
    cout<<p.first<< " "<<p.second<<endl;

    
}