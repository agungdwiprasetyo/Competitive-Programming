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

bool sortNilai(const ii &a,const ii &b){
       return a.second>b.second;
}

int main(){
	vii vec;
	viit it;
	int T;
	cin >> T;
	int n,x,y;
	while(T--){
		cin >> n;
		REP(i,n){
			cin >> x >> y;
			vec.pb(mp(x,y));
		}
		sort(vec.begin(), vec.end(), sortNilai);
		//FOREACH(it,vec) cout << it->first << " " << it->second << endl;
		int tmp=0, res=0;
		REP(i,n){
			tmp+=vec[i].first;
			res=max(res, tmp+vec[i].second);
		}
		cout << res << endl;
		vec.clear();
	}
	return 0;
}
