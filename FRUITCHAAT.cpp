#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	int x,y;
	while(tt--){
		cin >> x >> y;
		cout << min(x/2,y) << endl;
	}
}
