#include <bits/stdc++.h>
using namespace std;

int n, blue, a;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for(int i = 0; i < n;i++){
		cin >> a;

		blue = blue + a;

	}

	blue++;

	if(blue <= n){
		cout << blue << "\n";

	}else{
		cout << n << "\n";

	}
	

}