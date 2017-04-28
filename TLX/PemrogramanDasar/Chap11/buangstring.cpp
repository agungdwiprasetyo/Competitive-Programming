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

int main(){
	string s,t;
	cin >> s >> t;
	//scanf("%s %s",&s, &t);
	bool buangin;
	int count = 1;
	while(count!=0){
		count=0;
		unsigned sizes = s.length();
		unsigned sizet = t.length();
		if(sizes<sizet) break;
		for(unsigned i=0;i<=sizes-sizet;i++){
			buangin=false;
			unsigned it = i;
			for(unsigned j=0;j<sizet;j++,it++){
				if(s[it]==t[j]){
					buangin=true;
				}
				else {
					buangin=false;
					break;
				}
			}
			if(buangin) {
				s.erase(i,sizet);
				count++;
			}
		}
	}
	cout << s << endl;
	//printf("%s\n",s);
    return 0;
}
/*
 * sabunkeramaskekerara kera
 */
