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

int balik(int n){
	int tmp=n;
	int zz=0;
	while(tmp>0){
		zz = (zz*10)+(tmp%10);
		tmp/=10;
	}
	return zz;
}

int main(){
	vector<char> has;
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++) has.pb(s[i]);
	for(int i=s.length()-1;i>=0;i--) cout << has[i];
	cout << endl;
	return 0;
}
