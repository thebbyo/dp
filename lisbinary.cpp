#include <bits/stdc++.h>
using namespace std;
const int N = 2e6+10;
vector<int> vec(N);
int n;
int lis(){
	vector<int> temp;
	temp.push_back(vec[0]);
	for(int i=1;i<n;i++){
		if(vec[i] > temp.back()) temp.push_back(vec[i]);
		else{
			int idx=lower_bound(temp.begin(), temp.end(), vec[i]) - temp.begin();
			temp[idx] = vec[i];
		}
	}
	return temp.size();
}
int main(){
	
	cin>>n;
	for(int i=0;i<n;i++) cin>>vec[i];
	cout<<lis()<<endl;
	return 0;
}