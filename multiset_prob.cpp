#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
	cin>>n;
	multiset<int>ms;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		ms.insert(temp);
		for(auto& x:ms){
			cout<<x<<" ";
		}
		cout<<"\n";
	}
    return 0;

}