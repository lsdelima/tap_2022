#include <bits/stdc++.h>
using namespace std;

int n, d, r, l, c,mat[10][10];

bool test;

int main(){

	
	cin >> n;

		for(int i = 0;i < n;i++){

			cin >> d;
			cin	>> l;
			cin >> r;
			cin >> c;

			r--;c--;

			if(d == 0){

				if((c+l) > 10){
					cout << "N" << "\n";
					return 0;
				}

				for(int m = c;m < (c + l); m++){
					mat[r][m]++; 
				}


			}


			else if(d == 1){

				if((r + l) > 10){
					cout << "N" << "\n";
					return 0;
				}

				
				for(int m = r;m < (r + l); m++){
					mat[m][c]++; 
				}
			}


		}


		for(int x = 0; x < 10; x++){
			for(int y = 0; y < 10; y++){
				if((mat[x][y] == 0) || (mat[x][y] == 1))
					test = true;
				else
					test = false;

				if(test == false){
					cout << "N" << "\n";
					return 0;
				}

			}
		}	

		if(test = true){
			cout << "Y" << "\n";
			return 0;


		}

}