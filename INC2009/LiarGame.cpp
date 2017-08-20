#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pf push_front
#define mp make_pair
#define maks 100005
#define mod 1000003

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

bool isPrime[maks];
vii vec[maks];

// cari pangkat a^b pake teknik divide & conquer
int pangkat(int a, int b) {
   if (b==0) return 1;
   int x = pangkat(a, b/2);
   int has = ((long long)x * x)%mod;
   if (b%2 == 1) has = ((long long)has * a)%mod;
   return has % mod;
}

int main() {
	memset(isPrime, true, sizeof(isPrime));
	
	// cari bilangan-bilangan prima dari 2 sampai 100005 dgn teknik Sieve of Eratosthenes
	for (int i = 2; i < maks; i++) {
		if (isPrime[i]) {
			vec[i].pb(mp(i,1));
			for (int j = i*2; j < maks; j += i ) {
				int x = 0, n = j;
				while (n%i == 0) {
					n /= i;
					x++;
				}
				vec[j].pb(mp(i,x));
				isPrime[j] = false;
			}
		}
	}

	int n, r, k, T;
	cin >> T;
	while(T--){
		cin >> n >> r >> k;
		int tmp[maks] = {0};
		for (int i = 1; i <= k; i++ ) {
			for (int j = 0; j < vec[r-i+1].size(); j++ ) {
				tmp[vec[r-i+1][j].first] += vec[r-i+1][j].second;
			}
			for (int j = 0; j < vec[i].size(); j++ ) {
				tmp[vec[i][j].first] -= vec[i][j].second;
			}
		}
		int has = 1;
		for (int i = 1; i <= r-k; i++ ) {
			has = ((long long)has * (2*n-1)) % mod;
		}
		for (int i = 1; i <= r; i++ ) {
			has = ((long long)has * pangkat(i,tmp[i])) % mod;
		}
		cout << has%mod << endl;
	}
	return 0;
}
