#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define pf push_front
#define mp make_pair

typedef pair<int,int> ii;
typedef pair<int,string> pis;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef set<int> si;
typedef set<char> sc;
typedef map<int,string> mis;

bool kelipatan(int a, int b){
	bool cek=true;
	int temp;
	while(b!=1){
		temp=b%a;
		b=(int)b/a;
		if(temp!=0) {
			cek=false;
			break;
		}
	}
	return cek;
}

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

int main(){
	int n;
	vii faktor;
	cin >> n;
	bool prima = cekprima(n);
	if(prima) cout << n << endl;
	else{
		for(int i=2;i<n; i++){
			bool cek;
			int a=n, c=0;
			if(n%i==0){
				cek = cekprima(i);
				if(cek) {
					while(a){
						if(a%i!=0) break;
						a=a/i;
						c++;
					}
					faktor.pb(mp(i,c));
				}
			}
		}
		int size = faktor.size();
		for(int j=0;j<size;j++){
			cout << faktor[j].first;
			if(faktor[j].second>1) cout << "^" << faktor[j].second;
			if(j!=size-1) cout << " x ";
			else cout << endl;
		}
	}
	return 0;
}

// 2^2 x 5
