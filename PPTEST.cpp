#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, w;
	cin >> n >> w;
	vector<int> c(n), p(n), t(n);
	vector<vector<int>> dp(n+1, vector<int>(w+1, 0));
	REP(i,n) cin >> c[i] >> p[i] >> t[i];
	for(int i = 1; i<= n;++i){
		for(int j = 0; j <= w; ++j){
			if(j >= t[i-1]){
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-t[i-1]] + c[i-1]*p[i-1]);
			}
			else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	cout << dp[n][w] << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

