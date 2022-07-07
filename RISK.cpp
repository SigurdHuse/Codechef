#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

int search(vector<string> &v, int x, int y, int N, int M){
	if(x < 0 || y < 0 || x >= N || y>= M || v[x][y] == '0') return 0;
	v[x][y] = '0';
	return search(v,x+1,y,N,M) + search(v,x-1,y,N,M) + search(v,x,y+1,N,M) + search(v,x,y-1,N,M) + 1;
}

void solve(){
	int N, M, ans = 0;
	cin >> N >> M;
	vector<string> v(N);
	vector<int> mem;
	for(int i = 0; i< N;++i){
		cin >> v[i];
	}
	for(int i = 0; i< N;++i){
		for(int j = 0; j <M;++j){
			if(v[i][j] == '1'){
				int tmp = search(v,i,j,N,M);
				//for(string s : v) cout << s << endl;
				//cout << endl;
				mem.push_back(tmp);
			}
		}
	}
	sort(mem.begin(), mem.end());
	//for(int i : mem) cout << i << " ";
	//cout << endl;
	for(int i = (int)mem.size() - 2; i > -1; i-=2){
		ans += mem[i];
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

