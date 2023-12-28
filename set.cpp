#include <bits/stdc++.h>
//OR
#include <set>
using namespace std;
int main(){
    //set<data_type>set_name;
    //e.g
    set<int>squares;

    // insert():Same as push_back in Vectors
    // begin():Returns an iterator to the first element in the set.
    // end():Returns an iterator to the theoretical element that follows the last element in the set.
    // size():Returns the number of elements in the set.
    // max_size():Returns the maximum number of elements that the set can hold.
    // empty():Returns whether the set is empty.

    squares.insert(1);
    squares.insert(4);
    squares.insert(9);
    squares.insert(9);

    //cout<<squares; //Will not work! Compilation Error
    //ranged for loop is the best
    //for printing set containing elements

    for(auto& x:squares){
        cout<<x<<" ";
    } //will work! (Best Practise)
    
    // {1 4 9 9}

    // {1 4 9}
    // multiset<int>squares;
    return 0;

}