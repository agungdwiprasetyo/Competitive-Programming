#include<bits/stdc++.h>
using namespace std;

#define FOR(i, jan, cuk) for (int i = (int)jan; i <= (int)cuk; i++)
#define REP(jan,cuk) for (int jan = 0; jan < (int)cuk; jan++)
#define FOREACH(i,cuk) for ( i = (cuk).begin(); i != (cuk).end(); i++)
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

int main(){
	int n,q;
	string nama,cari,no;
	vector<pss> buku;
	cin >> n >> q;
	REP(i,n){
		cin >> nama >> no;
		buku.pb(mp(nama,no));
	}
	REP(i,q){
		cin >> cari;
		int first = 0,last=n-1,tengah=(first+last)/2;
		// binary search
		while(first<=last){
			if(buku[tengah].first<cari) first=tengah+1;
			else if(buku[tengah].first==cari) {
				cout << buku[tengah].second << endl;
				break;
			}
			else last=tengah-1;
			tengah = (first+last)/2;
		}
		
		if(first>last) cout << "NIHIL\n";
	}
	return 0;
}
