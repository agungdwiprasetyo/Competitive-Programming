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

long long fpb(long long x,long long y) {
    if (!y) return x;
    return fpb(y,x%y);
}

long long mutlak(long long x) {
    if (x>0) return x;
    return -x;
}

int main(){
	int A, B, C, D;
	scanf("%d %d", &A, &B);
	scanf("%d %d", &C, &D);
	if((B!=0) && (D!=0)){
		long long penyebut = B*D;
		long long pembilang = D*A + B*C;
		long long gcd = fpb(mutlak(pembilang), mutlak(penyebut));
		long long E = pembilang/gcd;
		long long F = penyebut/gcd;
		printf("%lld %lld\n", E, F);
	}
	return 0;
}
