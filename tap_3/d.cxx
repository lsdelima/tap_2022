#include <bits/stdc++.h>
using namespace std;

char mat[301][301];

char inc, inc2;

int contx, conty, n;

bool res_igl = true;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n; 

	for(int x = 0;x < n;x++){
		for(int y = 0;y < n;y++){
			cin >> mat[x][y];
		}
	}

	if((n % 2 == 0) || (n < 3) || (n >= 300) ){
		cout << "NO" << "\n";
		return 0;
	}

	inc = mat[0][0];

	inc2 = mat[0][1];

	for(int x = 0;x < n;x++){		
		for(int y = 0; y < n;y++){

			if((x == y) and ((mat[x][y]) == inc)){
				contx++;
			}

			if ((y  == ( (n-1) - x) ) and  mat[x][y] == inc ){
				conty++;

			}

			if ( ( (y != x) and (y != ((n - 1) - x)) ) and (mat[x][y] != inc2)) {
				res_igl = false;
				break;

			}

		}

	}

	if((contx == n and conty == n)  and res_igl == true and inc != inc2){
		cout << "YES" << "\n";
		return 0;
	}else{
		cout << "NO" << "\n";
		return 0;

	}

}