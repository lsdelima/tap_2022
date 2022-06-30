#include <bits/stdc++.h>
using namespace std;

int n, m, q, ent, tam, maior_tam, entra, entra2;

int mat[505][505];

vector <int> qtd;

int main(){

	cin >> n >> m >> q;

	qtd.resize(n, 0);

	for(int x = 0;x < n; x++){

		maior_tam = 0; tam = 0;

		for(int y = 0;y < m; y++){

			cin >> ent;

			if(ent == 1){

				mat[x][y] = ent;

				tam++;

			}else{

				tam = 0;

			}

			if(tam >= maior_tam){

				maior_tam = tam;
			}

		}

		qtd[x] = maior_tam ;

	}

	while(q--){

		cin >> entra >> entra2;

		entra--; entra2--;

		maior_tam = 0; tam = 0;

		if(mat[entra][entra2] == 0){

			mat[entra][entra2] = 1;

		}else{

			mat[entra][entra2] = 0;

		}

		for(int y = 0;y < m; y++){

			if(mat[entra][y] == 1){
				tam++;

			}else{

				tam = 0;

			}

			if(tam >= maior_tam){

				maior_tam = tam;
			}

		}

		qtd[entra] = maior_tam;

		cout << *max_element(qtd.begin(), qtd.end()) << "\n";

	}

	return 0;
}