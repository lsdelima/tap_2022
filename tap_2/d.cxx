#include <bits/stdc++.h>
using namespace std;

int t, var, ant, r, maior, pos_maior, x, i;

vector <int> vetTamD; 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;

	for (x = 0; x < t; x++){

		ant = maior = 0;

		maior = 0;

		cin >> r;

		vetTamD.resize(r);


		for(i = 0;i < r;i++){

			cin >> var;

			vetTamD[i] = var - ant;

			ant = var;

			if(vetTamD[i] > maior ){
				maior = vetTamD[i];
				pos_maior = i;
			}

		}

		for(i = 0;i < r;i++){

			if (maior == vetTamD[i]){
				maior --;
			}else

			if(((maior == 0 ) and i != (r-1)) or (maior < vetTamD[i])) {
				cout << "Case " << x+1 << ": "  << (vetTamD[pos_maior] + 1) << "\n";
				break;


			}

		}


		if(i == r)
			cout << "Case " << x+1 << ": " << vetTamD[pos_maior] << "\n";

	}

}