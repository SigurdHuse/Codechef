#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

ll gcd(ll a, ll b){
	while(b){
		a %= b;
		swap(a,b);
	}
	return a;
}

ll lcm(ll a, ll b){
	return a /gcd(a,b) * b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	ll a, b;
	while(tt--){
		cin >> a >> b;
		cout << gcd(a,b) << " "<< lcm(a,b)<<endl;
	}
}
