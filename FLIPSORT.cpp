#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	vector<pair<int,int>> mem;
	int l = 0, r = 1;
	while(l < n){
		if(s[l] == '1'){
			r = l;
			while(s[r] == '1' && r < n){
				r++;
			}
			if(r != n)mem.push_back({l+1,r-l});
			l = r;
		}
		else l++;
	}
	cout << mem.size() << endl;
	for(auto p : mem){
		cout << p.first << " " << p.second << endl;
	}
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

