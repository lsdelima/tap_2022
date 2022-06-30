#include <bits/stdc++.h>
using namespace std;

char img[52][52];

vector <pair<int,int>> stone;

int t, m, n, cont;

void fallstone(int x, int y){

	if(img[x-1][y] == '*'){

		img[x-1][y] = '.';
		img[x + cont][y] = '*';

		cont = 0;
		fallstone( x-1, y);
	}

	else if(img[x-1][y] == '.'){
		cont++;
		fallstone(x-1, y);

	}


	return;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;

	while(t--){

		cin >> n >> m;

		stone.clear(); 

		for(int x = 1; x <= n;x++){
			for(int y = 1; y <= m;y++){
				cin >> img[x][y];
				if(img[x][y] == '.'){
					stone.push_back(make_pair(x,y));
				}
			}
		}

		for(int x = stone.size() - 1; x >= 0; x--){
			fallstone(stone[x].first,stone[x].second);
			cont = 0;
		}

		for(int x = 1; x <= n;x++){
			for(int y = 1; y <= m;y++){
				cout << img[x][y];
			}cout << "\n";
		}cout << "\n";

	}

	return 0;

}