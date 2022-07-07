#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, ans = 1;
	string s;
	cin >> n;
	unordered_map<string, int> mem;
	REP(i,n){
		cin >> s;
		sort(s.begin(),s.end());
		mem[s]++;
	}
	for(auto p : mem) ans = max(ans, p.second);
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

