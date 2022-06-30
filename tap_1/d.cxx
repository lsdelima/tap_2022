# include <bits/stdc++.h>
using namespace std;

string s, st;

int i, ia, cont, cvez;

int main(){

    cin >> s;

    cin >> st;

    if(s.size() < st.size()){
        cout << 0;
         return 0;
    }

    

    do{

    	cont = 0;
    	for(ia = i;ia < (i + st.size());ia++){
    		if(st[ia - i] == s[ia]){
    			cont++;
    		}
    	}

    	i++;

        if(cont == 0)cvez++;

    } while ((ia + 1) <= s.size());


    cout << cvez << "\n";

}