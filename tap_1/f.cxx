#include <bits/stdc++.h>
using namespace std;

string s;
bool jog_esq = true, saldo = false;
int pe, pd, ve, vd, je, jd, jea, jda, vtt = 0, vtta = 0;
int main(){

	cin >> s;

	for(unsigned long long i = 0;i < s.size(); i++){

		if(s[i] == 'S'){

			if(jog_esq == true){
				pe++;

			}else if (jog_esq == false){
				pd++;

			}

		}else if(s[i] == 'R'){

			if(jog_esq == true){
				jog_esq = false;
				pd++;

			}else if(jog_esq == false){
				jog_esq = true;
				pe++;

			}

		} 


		if( ( ((pe >= 5) and ((pe - pd) >= 2)) or (pe >= 10) ) and jog_esq){
			ve++;
			pe = pe - 5;
			vtt++;

		}

		if( ( ((pd >= 5) and ((pd - pe) >= 2)) or (pd >= 10) )  and !jog_esq){
			vd++; 
			pd = pd - 5;
			vtt++;

		}


		if(vtt != vtta){
			vtta++;
			pd = 0;
			pe = 0;

		}




		if(s[i] == 'Q'){

			if((vd < 2) and (ve < 2)){

				if(jog_esq == true){
					cout << ve << " (" << pe << "*)" << " - " << vd << " (" << pd << ")" << "\n";

				}else if(jog_esq == false){
					cout << ve << " (" << pe << ")" << " - " << vd << " (" << pd << "*)" << "\n";

				}

			}else{

				if(ve >= 2){
					cout << ve << " (winner)" << " - " << vd << "\n";


				}else {
						cout << ve << " - " << vd << " (winner)" << "\n";

				}
		
			}

		}	

	}

}