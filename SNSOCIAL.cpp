#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

vector<pair<int,int>> dir = {{1,1},{1,0},{1,-1},
							 {0,1},{0,-1},
							 {-1,1},{-1,0},{-1,-1}};

void solve(){
	int n, m, mx = 0, ans = 0;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));
	vector<vector<bool>> mem(n, vector<bool>(m));
	REP(i,n)REP(j,m){
		cin >> v[i][j];
		mx = max(mx, v[i][j]);
	}
	bool checked = 1;
	while(checked){
		checked = 0;
		REP(i,n){
			REP(j,m){
				if(v[i][j] == mx && !mem[i][j]){
					mem[i][j] = 1;
					for(auto p : dir){
						if(i-p.first > -1 && i-p.first < n && j-p.second >-1 && j-p.second < m){
							if(v[i-p.first][j-p.second] != mx){
								v[i-p.first][j-p.second] = -1;
								checked = 1;
							}
						}
					}
				}
			}
		}
		ans += checked;
		REP(i,n)REP(j,m) if(v[i][j] == -1)v[i][j] = mx;
		/*
		REP(i,n){
			REP(j,m){
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
		*/
	}
	cout << ans << endl;
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

