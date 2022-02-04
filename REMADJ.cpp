#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, n;
	cin >> t;
	for(int _ = 0; _< t; _++){
		cin >>n;
		vector<int> v(n);
		vector<int> mem(n);
		int ans = 0;
		for(int i = 0; i< n; i++)cin >> v[i];
		if(n == 2){
			if(v[0] != v[1]) cout << 1 << endl;
			else cout << 0 << endl;
			continue;
		}
		int mx = *max_element(v.begin(),v.end());
		mem[0] = v[0];
		for(int i = 1; i< n; i++){
			mem[i] = mem[i-1] + v[i];
		}
		if(mem[1] == mx) ans++;
		for(int i = 2; i < n; i++){
			if((mem[i] - mem[i-2]) == mx)ans++;
		}
		cout << ans << endl;
	}
}
