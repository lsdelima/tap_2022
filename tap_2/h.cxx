# include <bits/stdc++.h>
using namespace std;

int n, t, result, maxx;

bool saida = false;

vector <int> shoes, printt, c3;

int bscbin(vector <int> &vet, int l, int r, int x){

	int resp = -1;

	while (r >= l){

		int mid = l + ((r - l) >> 1);

		if(vet[mid] >= x){ 
			r = mid - 1; 
			resp = mid;
		}else{
			l = mid + 1;
		}


	}

	return resp; 
}

int main (){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;

	while(t--){

		cin >> n;

		shoes.clear();
		shoes.resize(n);

		printt.clear();
		printt.resize(n);

		c3.clear();
		c3.resize(n,-1);

		for(int i = 0;i < n;i++){
			cin >> shoes[i];
			printt[i] = i + 1;
		}


		for(int i = (n-1); i >= 0; i--){

			result = (bscbin(shoes, 0, i - 1,shoes[i]));
			//cout << "--> " << result << endl;

			if(result == -1){
				saida = false;
				cout << result << "\n";
				break;

			}else{

				saida = true;

				c3[result] = i - result;

				i = result;

			}

		}

		if(saida == true){ 


			for(int i = 0; i < n; i++){

				if(i!= 0) cout << " ";

				cout << printt[i] + c3[i];

			}

			cout << "\n";


		}


		}

} 