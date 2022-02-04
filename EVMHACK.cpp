#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t,a ,b,c,p,q,r;
	cin >> t;
	for(int i = 0; i< t; i++){
		cin >> a >> b >> c >> p >> q >>r;
		int d1 = p -a, d2 = q-b, d3 = r-c;
		if(d1 >= d2 && d1 >= d3) a = p;
		else if(d2 >= d1 && d2 >= d3) b = q;
		else c = r;
		if(2*(a+b+c) > (p+q+r)) cout << "YES"<<endl;
		else cout << "NO" << endl;
	}
}
