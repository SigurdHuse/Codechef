#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	long long int a,b,c;
	for(int i = 0; i < t; i++){
		cin >> c; // c = x
		if(c == 1){
			a = 0, b = 1, c = 3;
		}
		else if(c && (!(c&(c-1)))){
			b = 0;
			a = c + 1;
		}
		else{
			int cnt = 0;
			long long int tmp = c;
			b = 0;
			while(tmp % 2){
				cnt ++;
				tmp /= 2;
			}
			long long int mask = 1 << cnt;
			a =  ((c & ~mask) | (1 << cnt));
		}	
		
		cout << a << " "<< b << " "<<c << endl;
		//long long int tmp = (a|b)&(b|c)&(c|a);
		//cout << tmp << endl;
	}
}
