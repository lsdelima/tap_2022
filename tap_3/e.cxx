#include <bits/stdc++.h>
using namespace std;

int n, fases;

string test;

map <string,int> forms =
{{"Tetrahedron",4},
{"Cube", 6},
{"Octahedron", 8},
{"Dodecahedron", 12},
{"Icosahedron",20}};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	map <string, int> :: iterator i;

	cin >> n;

	while(n--){
		cin >> test;

		fases = fases + forms[test];

	}

	cout << fases << "\n";

	return 0;
}
