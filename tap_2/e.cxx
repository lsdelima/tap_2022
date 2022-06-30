# include <bits/stdc++.h>
using namespace std;

int n, q , query, caso = 1, result;

vector <int> marbles;

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

	while(cin >> n >> q, (n || q)){

		marbles.clear();
		marbles.resize(n);

		for(int i = 0;i < marbles.size();i++){
			cin >> marbles[i];

		}

		cout << "CASE# " << caso << ":" << "\n";

		sort(marbles.begin(), marbles.end());

		while(q--){

			cin >> query;

			result = (bscbin(marbles, 0, n - 1, query));

		
			if(query == marbles[result])			
				cout << query << " found at " <<(bscbin(marbles, 0, n - 1, query)) + 1 << "\n";
			else
				cout << query << " not found" << "\n";
		}

		caso++;
		
	}


} 