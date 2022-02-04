#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, n;
	cin >> t;
	for(int i = 0; i< t; i++){
		cin >> n;
		double ans = pow(0.143*n,n);
		cout << round(ans) << endl;
	}
}
