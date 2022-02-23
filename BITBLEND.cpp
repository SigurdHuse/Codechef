#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t,n;
	cin >> t;
	for(int _ = 0; _ < t; _++){
		cin >> n;
		vector<int> v(n);
		int even = -1, odd = -1, last;
		for(int i = 0; i < n; i++){
			cin >> v[i];
			if(v[i] % 2) odd = i;
			else even = i;
		}
		last = v[0]%2;
		vector<int> ans;
		if(even == -1 || odd == -1) cout << -1 << endl;
		else{
			for(int i = 0; i < n-1; i++){
				if((v[i]%2) == 1 && (v[i+1]%2) == 1){
					if(last){
						v[i] = 0;
						ans.push_back(i+1);
						ans.push_back(even + 1);
						even = i;
					}
					else{
						v[i+1] = 0;
						ans.push_back(i+2);
						ans.push_back(even + 1);
						even = i+1;
					}
				}
				else if((v[i]%2) == 0 && (v[i+1]%2)==0){
					if(last){
						v[i+1] = 1;
						ans.push_back(i+2);
						ans.push_back(odd + 1);
						odd = i;
					}
					else{
						v[i] = 1;
						ans.push_back(i+1);
						ans.push_back(odd + 1);
						odd = i+1;
					}
				}
				last = v[i] %2;
			}
			cout << ans.size()/2 << endl;
			for(int i = 0; i< (int)ans.size(); i+=2){
				cout << ans[i] << " " <<ans[i+1] <<endl;
			}
		}
	}
}
