#include<bits/stdc++.h>
using namespace std;

#define FOR(i, jan, cuk) for (int i = (int)jan; i <= (int)cuk; i++)
#define REP(jan,cuk) for (int jan = 0; jan < (int)cuk; jan++)
#define FOREACH(jan,cuk) for ( jan = (cuk).begin(); jan != (cuk).end(); jan++)
#define pb push_back
#define pf push_front
#define mp make_pair

typedef pair<int,int> ii;
typedef pair<int,string> pis;
typedef pair<char,int> pci;
typedef pair<string,int> psi;
typedef pair<string,string> pss;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef list<int> li;
typedef list<char> lc;
typedef list<ii> lii;
typedef set<int> si;
typedef set<char> sc;
typedef map<int,string> mis;
typedef map<string,int> msi;
typedef vii::iterator viit;
typedef lii::iterator liit;


// penukaran uang koin dengan teknik dynamic programming (bottom up)
long penukaran(vi item, int n, int tukar){
	int i,j,x,y;
	long tabel[tukar+1][n];
	REP(i,n){
		tabel[0][i] = 1;
	}
	for(i=1;i<=tukar;i++){
		for(j=0;j<n;j++){
			if(i-item[j]>=0) x = tabel[i-item[j]][j];
			else x=0;
			
			if(j>=1) y=tabel[i][j-1];
			else y=0;
			
			tabel[i][j]=x+y;
		}
	}
	return tabel[tukar][n-1];
}

int main(){
	vi item;
	int n;
	int tukar;
	int itemCoin;
	cin >> n >> tukar;
	REP(i,n){
		cin >> itemCoin;
		item.pb(itemCoin);
	}
	long solusi = penukaran(item, n, tukar);
	cout << "Solusi: "<< solusi << " cara" << endl;
	return 0;
}
