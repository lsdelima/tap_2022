#include <bits/stdc++.h>
using namespace std;

string s;

int t, r, g, b;

int main()
{
	cin >> t;
	
	for(int i = 0; i < t; i++){ 
	
	cin >> s;
	
	r = g = b = 0;
	
		for(long unsigned int i2 = 0; i2 < s.size(); i2++){
			
			if(s[i2] == 'r')
				r++;
			else if(s[i2] == 'g')
				g++;
			else if(s[i2] == 'b')
				b++;
				
			else if(s[i2] == 'R')
				r--;
			else if(s[i2] == 'G')
				g--;
			else if(s[i2] == 'B')
				b--;
				 
			if(r < 0 || g < 0 ||   b < 0){
				cout << "NO" << "\n";
				break;
				
			}	

		}
		
		if(r >= 0 && g >= 0 &&  b >= 0)
		cout << "YES" << "\n";
		
	}	
}