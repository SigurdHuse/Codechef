#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 2; i<= (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	int b, c;
	while(tt--){
		cin >> b >> c;
		cout << c / __gcd(b,c) << endl;
	}
}
