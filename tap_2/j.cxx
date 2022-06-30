#include <bits/stdc++.h>
using namespace std;

int t, tam, y;

bool adif;

string s;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;

	while(t--){

		cin >> s;

		tam = s.size();

		adif = false;

		for(y = 0;y < tam;y++){
			if(s[y] != 'a'){
				adif = true;
				s.insert( s.begin() + (tam - y),'a');
				cout << "YES" << "\n" << s << "\n";
				break;
			}
		}

		if(!adif){
			cout << "NO" << "\n";
		}

	}  
}