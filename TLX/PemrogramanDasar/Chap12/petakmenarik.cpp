
#include<bits/stdc++.h>
using namespace std;

#define FOR(i, jan, cuk) for (int i = (int)jan; i <= (int)cuk; i++)
#define REP(jan,cuk) for (int jan = 0; jan < (int)cuk; jan++)
#define FOREACH(i,cuk) for ( i = (cuk).begin(); i != (cuk).end(); i++)
#define pb push_back
#define pf push_front
#define mp make_pair

typedef pair<int,int> ii;
typedef pair<int,string> pis;
typedef pair<char,int> pci;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef list<int> li;
typedef list<char> lc;
typedef list<ii> lii;
typedef set<int> si;
typedef set<char> sc;
typedef map<int,string> mis;
typedef vii::iterator viit;
typedef lii::iterator liit;

bool sortj(const ii &a,const ii &b){
       return a.second<b.second;
}
bool sorti(const ii &a,const ii &b){
       return a.first<b.first;
}

int main(){
	vii wad;
	int n,m,k,has;
	int arr[1000][1000];
	cin >> n >> m >> k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> arr[i][j];
		}
	}	
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j==1){
				if(i==1) has = arr[1][2]*arr[2][1];
				else if(i==n) has=arr[n][2]*arr[n-1][1];
				else has = arr[i-1][1]*arr[i][2]*arr[i+1][1];
			}else if(j==m){
				if(i==1) has = arr[1][m-1]*arr[2][m];
				else if(i==n) has=arr[n][m-1]*arr[n-1][m];
				else has = arr[i-1][m]*arr[i+1][m]*arr[i][m-1];
			}else if(i==1) has=arr[i][j-1]*arr[i+1][j]*arr[i][j+1];
			else if(i==n) has=arr[i][j-1]*arr[i-1][j]*arr[i][j+1];
			else has= arr[i-1][j]*arr[i+1][j]*arr[i][j-1]*arr[i][j+1];
			if(has==k) {
				cout << i << " " << j << endl;
				wad.pb(mp(i,j));
			}
		}
	}
	if(wad.empty()){
		cout << "0 " << "0" << endl;
		return 0;
	}else{
		vii::iterator it;
		//FOREACH(it,wad) cout << it->first << " " << it->second << endl;
		sort(wad.begin(),wad.end(),sortj);
		int kol = wad[0].second;
		li bar;
		FOREACH(it,wad) if(it->second == kol) bar.pb(it->first);
		bar.sort();
		cout << bar.front() << " " << kol << endl;
	}
	return 0;
}
