#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	int n, x;
	while(tt--){
		cin >> n >> x;
		if(x == 0) cout << 0 << endl;
		//else if((x%n) == 0) cout << n << endl;
		else cout << (x%(n+1)) << endl;
	}
}
