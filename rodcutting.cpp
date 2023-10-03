#include <bits/stdc++.h>
using namespace std;
const int N = 2e6+10;
vector<int> vec(N);
int n;
int dp[N];
int rodCutting(int len){
	int ans =0;
	if(dp[len] != -1) return dp[len];
	if(!len) return 0;
	for(int i=1;i<=n;i++){
		if(len - i >=0){
			ans = max(ans, rodCutting(len-i)+vec[i-1]);
		}
	}
	return dp[len] = ans;
}
int main(){
	memset(dp, -1, N);
	cin>>n;
	for(int i=0;i<n;i++) cin>>vec[i];
	cout<<rodCutting(n)<<endl;
	return 0;
}