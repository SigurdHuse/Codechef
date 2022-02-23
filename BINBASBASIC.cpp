#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t,n,k;
	string s;
	cin >> t;
	for(int i =0; i< t;i ++){
		cin >> n >> k;
		cin >> s;
		int cnt = 0;
		for(int j = 0; j< n/2;j++){
			if(s[j] != s[n-j-1]) cnt++;
		}
		if(cnt <= k && ((k - cnt)%2) == 0) cout << "YES" <<endl;
		else if(cnt <=k && n%2 == 1) cout << "YES" <<endl;
		else cout << "NO" << endl;
	}
}
