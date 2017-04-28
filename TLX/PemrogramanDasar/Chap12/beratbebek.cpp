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

int n;
long long xx[100000];
int binsearch(long long cari){
	int first = 0,last=n-1,tengah=(first+last)/2;
	while(first<=last){
		if(xx[tengah]<cari) first=tengah+1;
		else if(xx[tengah]==cari) {
			return tengah;
		}
		else last=tengah-1;
		tengah = (first+last)/2;
	}
	return tengah;
}

int main(){
	int m;
	long long min,max;
	cin >> n;
	REP(i,n){
		cin >> xx[i];
	}
	cin >> m;
	REP(i,m){
		cin >> min >> max;
		int x = binsearch(min);
		int y = binsearch(max);
		if(x==0){
			if(min<xx[0])cout << y+1 << endl;
			else cout << y << endl;
		}else cout << y-x << endl;
	}
	return 0;
}
