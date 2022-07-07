#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	string s, tmp;
	while(tt--){
		cin >> s;
		//tmp = s;
		int ans = 0, n = (int)s.size();
		//reverse(tmp.begin(),tmp.end());
		if(n%2)ans = n;
		else{
			REP(i,n/2){
				if(s[i] != s[n - i - 1]){
					ans = n - i - 1;
					break;
				}
			}
		}
		cout << ans << endl;
	}
}
