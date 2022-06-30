#include <bits/stdc++.h>
using namespace std;

int c, v, maior = 100 , test = 100;

int main()
{
	cin >> c;
	
	
	for(int i = 0;i < c;i++){
		cin >> v;
		
		test = test + v;
		
		if((test) > maior)
			maior = test;
		
	} 
	
	cout << maior << "\n";

}