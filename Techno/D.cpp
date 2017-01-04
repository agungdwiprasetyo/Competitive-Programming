// Bismillahirrahmanirrahim
// AgriCoder IPB
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <cctype>
#include <cstdlib>
#include <utility>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <list>
#include <bitset>
#include <sstream>
#include <clocale>
#include <ctime>
#include <climits>
//#include <unordered_map>
using namespace std;

#define FOR(i, agri, coder) for (int i = (int)agri; i <= (int)coder; i++)
#define REP(agri,coder) for (int agri = 0; agri < (int)coder; agri++)
#define FOREACH(i,agricoder) for (typeof((agricoder).end()) i = (agricoder).begin(); i != (agricoder).end(); ++i)
//for (auto& it: agricoder)
#define RESET(agri,coder) memset(agri, coder, sizeof(agri))
#define pb push_back
#define mp make_pair
#define NL printf("==========================\n")
#define getchar_unlocked getchar // for codeforces


int arahbar[8] = {0,1,0,-1,1,1,-1,-1};
int arahkol[8] = {1,0,-1,0,1,-1,-1,1};
int kudabar[8] = {-2,-1,1,2, 2,1 , -1 ,-2};
int kudakol[8] = {1 ,2 ,2,1,-1,-2 , -2,-1};

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef pair<LL,LL> PLL;
typedef unsigned int UNi;

template<typename T>
T getNum() {
   T res=0;
   char c;
   while(1)
   {
      c=getchar_unlocked();
      if(c==' ' || c=='\n') continue;
      else break;
   }
   bool negatif;
   if (c=='-') {
       negatif = true;
       res = 0;
   }
   else {
       res=c-'0';
       negatif = false;
   }
   while(1)
   {
      c=getchar_unlocked();
      if('0'<=c && c<='9') res=10*res + c-'0';
      else break;
   }
   if (negatif) res*=-1;
   return res;
}

inline void boost() {
	//dont use with cstdio, dont use in interactives
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}
//freopen("badmilk.in", "r", stdin);
//freopen("badmilk.out", "w", stdout);
//fclose(stdin);
//fclose(stdout);

#define INF 1000000000
#define EPS 1e-7
#define MAX_N 100005
// ================================  TEMPLATE ENDS HERE ================================================== //

LL MOD = 1000000007;
LL sisabagi(LL x) {
	LL ret = x%MOD;
	if (ret<0) return ret+MOD;
	return ret;
}
LL pangkatcepat(LL x,LL k) {
	LL ret = 1;
	while (k) {
		if (k&1) ret = (ret*x)%MOD;
		x = (x*x)%MOD;
		k>>=1;
	}
	return ret;
}

LL fak[100005];
LL kombinasi(LL A,LL B) {
	LL ret = fak[A];
	ret = sisabagi(ret * pangkatcepat(fak[B],MOD-2) );
	ret = sisabagi(ret * pangkatcepat( fak[(A-B)] ,MOD-2) );
	return ret;
}
int main() {
	fak[0] = (LL)1;
	FOR(i,1,100001) fak[i] = (fak[i-1]*i)%MOD;

	int n,Q;
	scanf("%d %d",&n,&Q);
	set<ii> himp;
	while (Q--) {
		int xxx,yyy;
		scanf("%d %d",&xxx,&yyy);
		ii wew = ii(xxx,yyy);
		if (himp.count(wew)) himp.erase(wew);
		else himp.insert(wew);
	}

	LL totalsemua = 1;
	REP(i,n) {
		totalsemua *= 2;
		totalsemua %= MOD;
	}
	totalsemua = sisabagi(totalsemua-1);
	for (set<ii>::iterator it = himp.begin(); it!=himp.end(); it++) {
		ii AB = *it;
		//printf("C(%d,%d) = %lld\n",AB.first,AB.second,kombinasi((LL)AB.first-1,(LL)AB.second-1));
		totalsemua = sisabagi(totalsemua - kombinasi((LL)AB.first-1,(LL)AB.second-1) );
	}
	cout << totalsemua << endl;
	return 0;
}
//int mutlak(int x) {
	//if (x>0) return x; return -x;
//}

//string kestring(int x){
	//string ret = "";
	//do {
		//ret = "!"+ret;
		//ret[0] = (char) ((x%10)+48);
		//x/=10;
	//} while (x);
	//return ret;
//}

//bool benarkah(int x) {
	//string s = kestring(x);
	//REP(i,s.length()-1) {
		//if (mutlak(s[i] - s[i+1]) > 1) return false;
	//}
	//return true;
//}

//int main() {
//while (1) {
	//int n;
	//scanf("%d",&n);
	//int mulai = 1;

	//REP(i,n-1) mulai*=10;
	//int selesai = mulai*10;

	//int jum = 0;
	//FOR(i,mulai,selesai-1) {
		//cout << kestring(i) << endl;
		//if (benarkah(i)) {
			//printf("%d benar\n",i);
			//jum++;
		//}
	//}
	//printf("jumlah = %d\n",jum);
//}
	//return 0;
//}
//10, 26,75,217,629,1826,5307
// Alhamdulillahirabbilalamin
