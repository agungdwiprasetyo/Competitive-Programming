#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define pf push_front
#define mp make_pair

typedef pair<int,int> ii;
typedef pair<int,string> pis;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef list<int> li;
typedef set<int> si;
typedef set<char> sc;
typedef map<int,string> mis;

bool cekprima(int x){
	int count=0;
	for(int i=2;i<=int(sqrt(x)); i++){
		if(x%i==0){
			if(i*i==x) count++;
			else count+=2;
		}
	}
	if(count) return false;
	else return true;
}

vii faktor(int n){
	vii fact;
	for(int i=2;i<n; i++){
		int a=n,c=0;
		if(n%i==0){
			if(cekprima(i)){
				while(a){
					if(a%i!=0) break;
					a=a/i;
					c++;
				}
				fact.pb(mp(i,c));
			}
		}
	}
	if(fact.size()==0) fact.pb(mp(n,1));
	return fact;
}

int main(){
	int n,k;
	vi hari;
	vii tmp;
	list<ii> fact;
	set<ii> prima;
	cin >> n;
	for(int i=0; i<n;i++){
		cin >> k;
		hari.pb(k);
	}
	int kpk=1;
	for(int i=0; i<n; i++){
		tmp = faktor(hari[i]);
		for(vii::iterator it = tmp.begin(); it != tmp.end(); it++) {
			int f=it->first, jum=it->second;
			fact.pb(mp(f,jum));
		}
	}
	fact.sort();
	fact.unique();
	fact.reverse();
	int tmpf=0;
	for(list<ii>::iterator it = fact.begin(); it != fact.end(); it++) {
		int f=it->first, jum=it->second;
		if(f!=tmpf){
			kpk *= pow(f,jum);
		}
		tmpf = f;
	}
	
	cout << kpk << endl;
	return 0;
}
