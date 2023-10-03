#include <bits/stdc++.h>
using namespace std;
const int N = 2e6+10;
vector<int> height(N);
int dp[N];
int n,k;
//0 1 1 2 3 5 8 13 21 34 
int solve(int i){
    int cost= INT_MAX;
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    for(int j=1;j<=k;j++){
    	if(i-j>=0)
    		cost = min(cost, solve(i-j)+ abs(height[i]-height[i-j]));
    }
    return dp[i] = cost;

}
int main(){
	memset(dp, -1, N);
	
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>height[i];

	cout<<solve(n-1)<<endl;
	return 0;
}