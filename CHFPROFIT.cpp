#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int T, X, Y, Z;
	cin >> T;
	for(int i = 0; i< T; i++) {
		cin >> X >> Y >> Z;
		cout << X*(Z - Y) << endl;
	}
}
