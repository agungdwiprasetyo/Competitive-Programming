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

int mantab(int a, int b, int x, int n){
	if(n==1) return abs(a*x+b);
	else return abs(a*mantab(a,b,x,n-1)+b);
}

int main(){
	int a,b,x,n,has;
	cin >> a >> b >> x >> n;
	has = mantab(a,b,x,n);
	cout << has << endl;
	return 0;
}
