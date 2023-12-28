#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[] = {1,2,3,4};
    vector<int> v;
    vector<int> v1(5,2); // {2,2,2,2,2}
    vector<int> v2(5); // {0,0,0,0,0}
    vector<int> v3(v1); // {2,2,2,2,2}
    vector<int> v4(v1.begin(),v1.end()); // {2,2,2,2,2} // [)
    // v1.push_back(5);
    
    v.push_back(5); // {5}
    v.push_back(8); // {5,8}
    v.push_back(7); // {5,8,7}
    v.push_back(5);

    // v = {5,8,7,5}

    v.pop_back();

    // v = {5,8,7}

    v.emplace_back(9);
    v.emplace_back(20);

    // v = {5,8,7,9,20};

    v.insert(v.begin()+2,50);

    // v = {50,5,8,7,9,20};
    
    v.emplace(v.end(),32);

    // v = {50,5,8,7,9,20,32};
    
    v.swap(v1);

    // v = {2,2,2,2,2};
    

    v1.swap(v);

    // v = {50,5,8,7,9,20,32};

    v.erase(v.begin());

    // v = {5,8,7,9,20,32};

    v.erase(v.begin()+2,v.end());

    // v = {5,8}

    v.clear();

    // v = {}

    cout<<v.empty()<<endl; // prints 1
    
    v.push_back(5);
    v.push_back(8);
    v.push_back(7);
    v.push_back(5);
    cout<<"The simple way: ";
    for (int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
    cout<<"Using iterators: ";
    for (auto it = v.begin();it<v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // v = {5,7,8,5}
    cout<<"Using for each loop: ";
    for (auto it : v){
        cout<<it<<" ";
    }
}