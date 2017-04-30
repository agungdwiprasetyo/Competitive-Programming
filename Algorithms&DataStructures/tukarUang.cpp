#include<bits/stdc++.h>
using namespace std;

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


// penukaran uang koin dengan teknik Dynamic Programming (bottom up)
int penukaran(vi item, int n, int tukar){
    int tabel[tukar+1];
    memset(tabel, 0, sizeof(tabel));
    tabel[0] = 1;
    for(int i=0; i<n; i++){
        for(int j=item[i]; j<=tukar; j++){
            tabel[j] += tabel[j-item[i]];
		}
	}
    return tabel[tukar];
}

// fungsi untuk mencari jumlah koin minimal yang dapat ditukar
int minimalCoin(vi item, int n, int tukar){
	int tabel[tukar+1];
	tabel[0] = 0;
	int minim;
	for(int i=1;i<=tukar;i++){
		minim = INT_MAX;
		for(int j=0;j<n;j++){
			if(item[j]<=i) minim=min(minim,tabel[i-item[j]]+1);
		}
		tabel[i]=minim;
	}
	return tabel[tukar];
}

int main(){
	vi item;
	int n;
	int tukar;
	int itemCoin;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> itemCoin;
		item.pb(itemCoin);
	}
	cin >> tukar;
	cout << "Banyak Cara Penukaran: " << penukaran(item, n, tukar) << " cara" << endl;
	cout << "Jumlah Koin Minimal  : " << minimalCoin(item, n, tukar) << " koin" << endl;
	return 0;
}

/*
	Sample input:
	7
	1 5 10 25 50 100 200
	450
	
	Output:
	Banyak Cara Penukaran: 69388 cara
	Jumlah Koin Minimal  : 3 koin
*/ 
