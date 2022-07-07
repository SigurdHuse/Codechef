#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

vector<pair<int,int>> dir = {{1,1},{1,0},{1,-1},
							 {0,1},{0,-1},
							 {-1,1},{-1,0},{-1,-1}};

void search(vector<vector<int>> &board, int r, int c, int k){
	if(k <= 0 || r < 0 || r >= 8 || c < 0 || c >= 8 ||k < board[r][c]) return;
	board[r][c] = k;
	for(auto p : dir){
		search(board, r- p.first, c - p.second, k - 1);
	}
	return;
}

void solve(){
	int r, c, k;
	cin >> r >> c >>k;
	r--; c--; k++;
	vector<vector<int>> board(8, vector<int>(8));
	search(board, r, c, k);
	int ans = 0;
	REP(i,8) REP(j,8) ans += (board[i][j] > 0);
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

