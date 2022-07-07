#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt,n;
	cin >> tt;
	string s;
	while(tt--){
		cin >> n>> s;
		int ans = 1; 
		for(int i = 1; i< n;++i){
			if(s[i] != s[i-1]) ans++;
		}
		cout << ans << endl;
	}
}
