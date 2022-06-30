#include <bits/stdc++.h>
using namespace std;

int n, vent, crim, poli, crimpe = 0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	while(n--){

		cin >> vent;

		if(vent < 0){
			crim++;

		}else{
			poli = poli + vent;

		}

		if(poli && crim){

			while(poli && crim){
				poli--;
				crim--;

			}

		}else if(poli <= 0){
			crimpe++;
			crim--;

		}
	
	}

	cout << crimpe << "\n";

}