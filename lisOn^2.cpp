#include <bits/stdc++.h>
using namespace std;
const int N = 2e6+10;
vector<int> vec(N);
int dp[N];
int lis(int i){
	if(dp[i] != -1) return dp[i];
	int ans = 1;
	for(int j=0;j<i;j++){
		if(vec[i]>vec[j]) ans = max(ans, lis(j)+1);
	}
	return dp[i] = ans;
}
//O(N^2)
int main(){
	memset(dp,-1,N);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>vec[i];
	int ans =0;
	for(int i=0;i<n;i++) ans = max(ans, lis(i));
	cout<<ans<<endl;
	return 0;
}