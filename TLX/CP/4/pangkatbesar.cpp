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

long long pangkat(long a, long b){ // O(2*floor(log n))
	//a%=1000000;
	long long tmp;
	if(b==0) return 1;
	cout << a << " " << b << endl;
	tmp = pangkat(a,b/2); // divide
	cout << "tmp: " << tmp << endl;
	tmp%=1000000;
	//conquer
	if(b%2==0){
		return (tmp*tmp)%1000000;
	}else return (a*tmp*tmp)%1000000;
}

int main(){
	long x,y;
	cin >> x >> y;
	long long has = pangkat(x,y);
	cout << has << endl;
	return 0;
}
