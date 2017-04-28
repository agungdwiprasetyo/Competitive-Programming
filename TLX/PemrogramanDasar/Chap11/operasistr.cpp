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

string buang(string s, string s2, string s3, string s4, bool sisip){
	bool buangin;
	string t;
	if(sisip) t=s3;
	else t=s2;
	unsigned sizes = s.length();
	unsigned sizet = t.length();
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
			if(sisip){
				s.insert(i,s3+s4);
				break;
			}
		}
	}
	return s;
}

int main(){
	string s1,s2,s3,s4;
	cin >> s1 >> s2 >> s3 >> s4;
	s1 = buang(s1,s2,s3,s4, false);
	s1 = buang(s1,s2,s3,s4, true);
	cout << s1 << endl;
	return 0;
}
