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

bool kebalik(const int a, const int b){
	return a>b;
}

int main(){
	int n,tinggi,x;
	vi item;
	vi::iterator it;
	cin >> n >> tinggi;
	for(int i=0;i<n;i++){
		cin >> x;
		item.pb(x);
	}
	sort(item.begin(), item.end(), kebalik);
	int temp=0, res=0;
	FOREACH(it, item){
		temp+=*it;
		res++;
		if(temp>=tinggi) break;
	}
	cout << res << endl;
	return 0;
}
