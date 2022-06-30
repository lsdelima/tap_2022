#include <bits/stdc++.h>
using namespace std;

int t;
string s;
char l;

int main()
{
	cin >> t;
	
	for(int i;i < t;i++){
		cin >> s;
		cin >> l;
		
		for(unsigned long long  i2 = 0; i2 < s.size();i2++){
			
			if((s[i2] == l) && (i2 % 2 == 0)){
				cout << "YES" << "\n";
				break;
				
			}
			
			if (i2 == (s.size()-1)) {
				cout << "NO" << "\n";
				
			}
			
		}
	
	}
	
}