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

bool sortFirst(const ii &a,const ii &b){
       return a.first>b.first;
}

bool sortSecond(const ii &a,const ii &b){
       return a.second<b.second;
}

int main(){
	vii vec;
	viit it;
	int n,m,x,y;
	cin >> n;
	REP(i,n){
		cin >> x >> y;
		vec.pb(mp(x,y));
	}
	sort(vec.begin(), vec.end(), sortFirst);
	int max1 = vec[0].first;
	sort(vec.begin(), vec.end(), sortSecond);
	int min1 = vec[0].second;
	vec.clear();
	cin >> m;
	REP(i,m){
		cin >> x >> y;
		vec.pb(mp(x,y));
	}
	sort(vec.begin(), vec.end(), sortFirst);
	int max2 = vec[0].first;
	sort(vec.begin(), vec.end(), sortSecond);
	int min2 = vec[m-1].second;
	
	int ans1 = max2-min1;
	int ans2 = max1-min2;
	int maksi = max(ans1,ans2);
	if(maksi<0) cout << 0 << endl;
	else cout << maksi << endl;
	return 0;
	
	
	/*
	int n,m,temp1,temp2;
	int min1=1000000001, min2=1000000001, max1=0, max2=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&temp1,&temp2);
		if(min1>temp2) min1 = temp2;
		if(max1<temp1) max1 = temp1;
	}
	scanf("%d",&m);
	for(int i=0;i<m	;i++){
		scanf("%d %d",&temp1,&temp2);
		if(min2>temp2) min2 = temp2;
		if(max2<temp1) max2 = temp1;
	}
	int ans1 = max2 - min1;
	int ans2 = max1 - min2;

	printf("%d\n",((max(ans1,ans2)<0)?0:max(ans1,ans2)));*/
}
