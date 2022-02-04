#include <bits/stdc++.h>
#define M 1000000007 
using namespace std; 

int main()
{
	int t, n;
	long long int k, m, ans = 0;
	cin >> t;
	unordered_map<int, long long int> mem;
	for(int _ = 0; _ < t; _++){
		cin >> n >> k >>m;
		unordered_map<int, vector<int>> tmp;
		for(int i = 1; i< 10; i++){
			vector<int> v(10);
			long long int x = i * k;
			while(x){
				v[x%10]++;
				x/=10;
			}
			tmp[i] = v;
		}
		mem[n] = 1;
		for(long long int i = 0; i< m; i++){
			vector<long long int> v(10);
			vector<long long int> v
		}
	}
}
