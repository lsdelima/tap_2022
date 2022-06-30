#include <bits/stdc++.h>
using namespace std;

int n, k;

double test ,total;

vector<pair<int,int>> v;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	cin >> k;

	v.resize(n);

	for(int i = 0; i < n;i++){

		 cin >> v[i].first;

		 cin >> v[i].second;

	}

	for(int i = 0; i < (n-1);i++){

		test = sqrt( ( (v[i+1].first - v[i].first) * (v[i+1].first - v[i].first) )  + ( (v[i+1].second - v[i].second) * (v[i+1].second - v[i].second) ) );

		total = total + test;

	}

	total = ((total * k)/50);

	cout << setprecision(10) << total << "\n";

	return 0;
}
