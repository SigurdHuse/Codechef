#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, x,y;
	cin >> t;
	for(int i = 0; i< t; i++){
		cin >> x >> y;
		if(x == y) cout << 2*y - 1 << endl;
		else cout << x + y << endl;
	}
}
