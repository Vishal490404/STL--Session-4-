#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    // v.emplace_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // emplace_back is faster than push_back
    // vector<pair<int,int>> vec;
    // vec.push_back({1,2});
    // vec.emplace_back(1,2);

    vector<int> vi(5,100);  // {100,100,100,100,100}
    vector<int> vt(5) ;      // {0,0,0,0,0} or garbage value
    vector<int> v1(5,20);   // {20,20,20,20,20}
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it_end = v.end();  
    // end() points to location after the last element of the vector
    // vector<int>::iterator it = v.rend();
    // rend() points to location before the first element of the vector
    // vector<int>::iterator it = v.rbegin();
    // rbegin() points to location the last element of the vector
    it_end-=1;
    cout<<*(it_end)<<endl;
    for(vector<int>::iterator it = v.begin(); it != it_end; it++){
        cout << *(it) << " ";
    }
    cout<<endl;
    // "auto" automatically detects the data type
    // int a=5;
    // auto a=5;
    for (auto it = v.begin(); it != it_end; it++){
        cout << *(it) << " ";
    }
    cout<<endl;
    for(auto it : vt){
        cout << it << " ";
    }
    cout<<endl;
    // 1 3 4 5
    v.erase(v.begin() + 1);
    // pass the address using iterator
    v.erase(v.begin() + 1, v.end());  // removing +2 from the end iterator
    // v.erase(start, end)
    cout<<v.capacity()<<endl;
    v.insert(v.begin() + 1, 10);
    // v.insert(position, value)
    v.insert(v.begin() + 1, 2, 10);
    // v.insert(position, occurrences, value)

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());

    cout << v.size()<<endl;  // returns size of vector

    v.pop_back();  // pops last element
    v1.swap(v2);   // swaps two vectors

    v.clear();  // erases the entire vector
    cout << v.empty()<<endl;  // returns boolean if it is empty

    vector<vector<int>> vec2(10, vector<int>(20, 0));

    return 0;
}
