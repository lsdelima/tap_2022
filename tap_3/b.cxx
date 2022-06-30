#include <bits/stdc++.h>
using namespace std;

int n, m , k , x, y, ant, opant, colant;

long long a;

long long mat[5005][5005];

bool linha[5005];

bool coluna[5005];

long long kk [100000][3];

int main(){

	cin >> n >> m >> k;

	for(int i = 0; i < k; i++){

		cin >> kk[i][0] >> kk[i][1] >> kk[i][2];

	}

	for(int i = (k - 1);i >= 0; i--){

		/*cout << kk[i][0] << kk[i][1] << kk[i][2] << "\n";*/

		if(kk[i][0] == 1){

			if(linha[(kk[i][1]-1)] == false){

				for(int i2 = 0; i2 <= m;i2++){

					if(mat[(kk[i][1]-1)][i2] == 0)

						mat[(kk[i][1]-1)][i2] = kk[i][2];

				}

				linha[(kk[i][1]-1)] = true;

			} 

		}else if(kk[i][0] == 2){

			if(coluna[(kk[i][1]-1)] == false){

				for(int i2 = 0; i2 <= n;i2++){

					if(mat[i2][(kk[i][1]-1)] == 0)

						mat[i2][(kk[i][1]-1)] = kk[i][2];

				}

				coluna[(kk[i][1]-1)] = true;

			}


		}

	}

	for(x = 0; x < n; x++ ){

		for(y = 0; y < m; y++){

			cout << mat[x][y] << " ";

		}

		cout << "\n";

	}

	return 0;
}