#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pf push_front
#define mp make_pair

typedef pair<int,int> ii;
typedef pair<int,string> pis;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef set<int> si;
typedef set<char> sc;
typedef map<int,string> mis;

//bool cekKata(

int main(){
    mis cuk;
    string kata;
    string test;
    int T;
    int jarak=0;
    bool belakang=false, depan=false, tengah=false, cumasatu=false;
    cin >> test >> T;
    for(int i=0;i<T;i++){
		cin >> kata;
		cuk.insert(pis(i,kata));
	}
	//cout << endl;
	int testTop = 0;
	int testEnd = test.length()-1;
	if(test[testTop]!='*'){
		belakang=true;
		if(test[testEnd]!='*') tengah=true;
		while(test[jarak]!='*') jarak++;
	}else if(test[testTop]=='*'){
		depan=true;
		if(testEnd==0) cumasatu = true;
	}
	
	//cout << jarak << endl << depan << " " << tengah << " " << belakang << endl <<endl;
	
	for(mis::const_iterator it = cuk.begin();it != cuk.end(); ++it){
		if(cumasatu) cout << it->second <<  "\n";
		else{
			//cout << it->first << " ";
			string uji = it->second;
			int ujiTop = 0;
			int ujiEnd = uji.length()-1;
			bool testing = true;
			if(test.length()>uji.length()+1) continue;
			if(depan){
				for(int dep=testEnd; dep>0; dep--, ujiEnd--){
					if(uji[ujiEnd]!=test[dep]) {
						testing=false;
						break;
					}
				}
			}else if(belakang){
				for(int bel=0; bel<jarak; bel++, ujiTop++){
					if(uji[ujiTop]!=test[bel]){
						testing=false;
						break;
					}
				}
				//cout << "testteng "<<testing;
				if(tengah){
					for(int teng=testEnd; teng>jarak; teng--,ujiEnd--){
						if(uji[ujiEnd]!=test[teng]) {
							testing=false;
							break;
						}
					}
				}
				//cout << " --- test2 "<<testing;
			}
			
			if(testing) cout << uji << endl;
		}
	}
    return 0;
}

/*

ma*n
5
mula
manka
minumn
man
hama

*/
