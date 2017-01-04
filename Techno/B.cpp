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

int deg[100005];
vi AdjList[100005];
int n,m;

bool agungjancuk() {
	// cek kromatik
	int s = 0;
	queue<int> q; q.push(s);
	vi color(n, INF); color[s] = 0;
	bool isBipartite = true; // addition of one boolean flag, initially true
	while (!q.empty() & isBipartite) { // similar to the original BFS routine
		int u = q.front(); q.pop();
		//printf("Cek %d:\n",u+1);
		for (int j = 0; j < (int)AdjList[u].size(); j++) {
			int v = AdjList[u][j];
			//printf("Cek %d\n",v+1);
			if (color[v] == INF) {
					// but, instead of recording distance,
					color[v] = 1 - color[u]; // we just record two colors {0, 1}
					q.push(v);
			}
			else if (color[v] == color[u]) { // u & v.first has same color
				isBipartite = false; break; // we have a coloring conflictati
			}
		}

	}

	return isBipartite;
}

int main() {
	scanf("%d %d",&n,&m);
	if (n&1) {
		printf("-1\n");
		return 0;
	}
	if (m != ( ( (n>>1) -1)*3+1 ) ) {
		printf("-1\n");
		return 0;
	}

	REP(i,n) deg[i] = 0;
	REP(i,m) {
		int x,y;
		scanf("%d %d",&x,&y);
		x--; y--;
		AdjList[x].pb(y);
		AdjList[y].pb(x);
		deg[x]++; deg[y]++;
	}

	// cek degree sequence
	sort(deg,deg+n);
	bool benardegree = true;
	if (n==2) {
		if (deg[0]!=1 or deg[1]!=1) benardegree = false;
	}
	else {
		REP(i,4) if (deg[i]!=2) benardegree = false;
		FOR(i,4,n-1) if (deg[i]!=3) benardegree = false;
	}

	if (!benardegree) {
		printf("-1\n");
		return 0;
	}

	if (!agungjancuk()) {
		printf("-1\n");
		return 0;
	}

	printf("%d\n",n>>1);
	return 0;
}
//10, 26,75,217,629,1826,5307
// Alhamdulillahirabbilalamin
