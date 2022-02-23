#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	int n;
	while(tt--){
		cin >> n;
		vector<int> v(2*n);
		for(int i = 0;i<2*n; ++i) cin>> v[i];
		sort(v.begin(),v.end());
		if(v[0] > 0){
			cout << "YES" << endl;
		}
		else{
			int last = v[0];
			bool bad = 1;
			bool found = 0;
			for(int i = 1; i < 2*n; ++i){
				if((v[i] != last) && bad){
					cout <<"NO" << endl;
					found = 1;
					break;
				}
				else if(v[i] == last) bad = 0;
				else if(v[i] > (last + 1)){
					if((i == (2*n - 1)) && bad) cout << "NO" << endl;
					else if(v[i] == v[i+1] || !bad) cout << "YES" <<endl;
					else cout << "NO" <<endl;
					found = 1;
					break;
				} 
				else{
					last = v[i];
					bad = 1;
				}
			}
			if(!found){
				if(v[2*n - 1] != v[2*n - 2]) cout << "NO" << endl;
				else cout << "YES" <<endl;
			}
		}
	}
}
