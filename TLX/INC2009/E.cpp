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

int mod = 9973;

int pangkat(int x, int y){
	int tmp=1;
	while(y--) tmp=(tmp*x)%mod;
	return tmp;
}

int main(){
	int T;
	cin >> T;
	int N;
	while(T--){
		cin >> N;
		int A = 45*pangkat(10,N-2);
		int B = 25*9*pangkat(10,N-3);
		int C = 45*25*pangkat(10,N-4);
		cout << (((A+B-C)%mod)+mod)%mod << endl;
	}
	return 0;
}
