/*
11 6
000000
000000
011100
010011
111111
011000
111111
111111
011001
001100
011011
* 
5 3
111
001
111
001
110
* 
* 
0  000000
1  000010
2  011100
3  110011
4  000000
5  111000
6  000000
7  000000 <------
8  111001
9  001100
10 111011

*/

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

bool ilang(string s){
	sc tampung;
	for(unsigned int i=0;i<s.length();i++){
		tampung.insert(s[i]);
	}
	
	bool ada = (tampung.find('1') != tampung.end());
	if(ada && (tampung.size()==1)) return true;
	else return false;
}

string resetStr(int c){
	char out[50] = {};
	for(int i=0; i<c; i++) out[i] = '0';
	return out;
}

int main(){
	int N,C,idxIl, idx;
	bool isIlang,jalan=true;
	string S[50] = {};
	cin >> N >> C;
	for(int i=0;i<N;i++){
		cin >> S[i];
	}
	while(jalan){
		jalan=false;
		for(int i=0;i<N;i++){
			isIlang = ilang(S[i]);
			if(isIlang) {
				S[i] = resetStr(C);
				idxIl = i;
				jalan=true;
			}
		}
		if(idxIl==0) jalan=false;
		if(jalan){
			for(int j=0;j<C;j++){
				idx=idxIl;
				bool masihRuntuh = true;
				while(masihRuntuh){
					int sumRuntuh = 0;
					int keatas = idx;
					int kebawah = idx;
					char cek = '\0';
					while(cek=S[keatas][j],cek == '0'){
						keatas--;
						sumRuntuh++;
						if(keatas<=0) {
							masihRuntuh = false;
							keatas=0;
							break;
						}
					}
					while(cek=S[kebawah][j],cek == '0'){
						kebawah++;
						if(S[kebawah][j]=='1') break;
						if(kebawah>=N-1) { // N=11
							sumRuntuh = N-1-keatas;
							break;
						}
						sumRuntuh++;
					}
					S[keatas+sumRuntuh][j] = S[keatas][j];
					S[keatas][j] = '0';
					sumRuntuh = 0;
					//cout << "rte cuk\n" <<j << " " <<keatas << " " << kebawah << endl;
					idx--;
				}
			}
		}
	}
	//cout <<"Akhir: " <<endl;
	for(int i=0;i<N;i++) {
		cout << S[i] << endl;
	}
	return 0;
}
