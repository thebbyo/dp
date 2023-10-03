#include <bits/stdc++.h>
using namespace std;
string a, b;
int lcs(int i, int j){
	if(i<0 || j<0) return 0;
	int ans = lcs(i-1,j);
	ans = max(ans, lcs(i,j-1));
	ans = max(ans, lcs(i-1,j-1)) + (a[i] == b[j]);
	return ans;
}
int main(){
	cin>>a>>b;
	cout<<lcs(a.size()-1, b.size()-1);
	return 0;
}