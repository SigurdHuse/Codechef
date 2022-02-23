#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	unordered_set<int> row;
	unordered_set<int> line;
	int n, x, y;
	while(tt--){
		row.clear();line.clear();
		cin >> n;
		for(int i = 0; i< n; ++i){
			cin >> x >> y;
			row.insert(x);
			line.insert(y);
		}
		cout << row.size() + line.size() << endl;
	}
}
