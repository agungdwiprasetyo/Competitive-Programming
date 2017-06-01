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

int tabel[52][52];
vi titik;

int f(int a, int b){
    if(b-a==1) return 0;
    if(tabel[a][b]!=-1) return tabel[a][b];
    int x=INT_MAX;
    for(int i=a+1;i<b;i++)
        x=min(x, titik[b] - titik[a] + f(a,i) + f(i,b));
    tabel[a][b]=x;
    return x;
}

int solveDP(int n){
	for(int i=0;i<=n+1;i++)
		for(int j=0;j<i;j++)
			tabel[i][j]=0;
	for(int gap=0;gap<=n;gap++){
		for(int x=1;x<=n-gap;x++){
			int y=x+gap;
			int best=INT_MAX;
			int cost=titik[y+1]-titik[x-1];
			for(int k=x;k<=y;k++){
				best=min(best,tabel[x][k-1]+tabel[k+1][y]+cost);
			}
			tabel[x][y]=best;
		}
	}
	REP(i,n+2){
		REP(j,n+1){
			cout << tabel[i][j] << " ";
		}
		cout << endl;
	}
	return tabel[1][n];
}

int main(){   
    int L;
    int n;
    int aux;
	cin >> L;
	if(L==0) return 0;
	cin >> n;
	titik.pb(0);
	for(int i=0;i<n;i++)
	{
		cin>>aux;
		titik.pb(aux);
	}
	titik.pb(L);
	
	printf("The minimum cutting is %d.\n",solveDP(n));
    return 0;
}
