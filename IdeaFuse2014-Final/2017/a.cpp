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

void a(){
	int r,c,b,ri,sel;
	cin >> r >> c >> b;
	for(int i=0;i<r;i++){
		cin >> ri;
		sel = abs(ri-b);
		if(ri<b){
			REP(k,sel) cout << "left\n";
		}else REP(k,sel) cout << "right\n";
		cout << "forward\n";
	}
	cout << "finish\n";
}

void C(){
	string s;
	cin >> s;
	REP(i,s.length()){
		
	}
	cout << s.length() << endl;
}

int main(){
	C();
	return 0;
}
