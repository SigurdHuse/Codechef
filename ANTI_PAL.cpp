#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, n;
	string s;
	cin >> t;
	for(int _ = 0; _ < t; _++){
		cin >> n >> s;
		if(s.size() % 2) cout << "NO"<<endl;
		else{
			vector<int> mem(26);
			for(char c : s) mem[c - 'a']++;
			if(*max_element(mem.begin(),mem.end())>(int)s.size()/2){
				cout << "NO"<<endl;
			}
			else{
				sort(mem.begin(), mem.end());
				bool right = 1;
				string ans = "";
				for(int i = 0; i< (int)mem.size();i++){
					for(int j = 0; j < mem[i]; j++){
						if(right) ans += (char)i + 'a';
						else ans.insert(0,to_string((char)i+'a'));
					}
					right ^= 1;
				}
				cout << "YES"<<endl;
				cout << ans << endl;
			}
		}
	}
}
