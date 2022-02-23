#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	unsigned long long int x, m;
	while(tt--){
		cin >> x >> m;
		if(m == 0){
			cout << 0 << endl;
			continue;
		}
		m--;
		unsigned long long int num = 1;
		while(m && num < x){
			num <<=1;
			m--;
		}
		
		ll ans = (num >= x) + m;
		cout << ans <<endl;
	}
}
