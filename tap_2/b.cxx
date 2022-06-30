#include <bits/stdc++.h>
using namespace std;

int n,chat;

long long x, di;

char op;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> x;

	while(n--){

		cin >> op >> di;

		if(op == '+'){
			x = x + di;


		}else if((op == '-') && (x - di >= 0)){
			x = x - di;

		}else{
			chat++;

		}

	}

	cout << x << " " << chat << "\n";

}