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
typedef vector<int> vi;
typedef vector<ii> vii;
typedef list<int> li;
typedef list<char> lc;
typedef list<ii> lii;
typedef set<int> si;
typedef set<char> sc;
typedef map<int,string> mis;
typedef vii::iterator viit;
typedef lii::iterator liit;

bool sortNilai(const ii &a,const ii &b){
       return a.second<b.second;
}

int main(){
	vii kupon;
	li hasil;
	int n,x,has,t;
	cin >> n >> x;
	REP(i,n){
		cin >> t;
		has = abs(t-x);
		kupon.pb(mp(t,has));
	}
	sort(kupon.begin(), kupon.end(), sortNilai);
	int cek = kupon[0].second;
	//cout << cek << endl;
	vii::iterator it;
	for(it=kupon.begin();it!=kupon.end();it++){
		if(it->second == cek) hasil.pb(it->first);
		//cout << it->first << " " << it->second << endl;
	}
	hasil.sort();
	cout << hasil.front() << endl;
}
