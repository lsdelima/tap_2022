#include <bits/stdc++.h>
using namespace std;

string x;

int tam;

bool zero = true, fnine = false;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> x;

	tam = x.size();



	for(int i = 0;i < tam;i++){

		if(x[i] == '5'){
			x[i] = '4';

		}else if(x[i] == '6'){
			x[i] = '3';

		}else if(x[i] == '7'){
			x[i] = '2';

		}else if(x[i]== '8'){
			x[i] = '1';

		}else if((x[i]== '9') && fnine){
			x[i] = '0';

		}
		
		

		if(x[i] != '0'){
			zero = false;
		}

		if(zero == false){
			cout << x[i];
			fnine = true;

		}

	}


	if(zero == false)
		cout << "\n";
	else{
		cout << 0 << "\n";
	}

}