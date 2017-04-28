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
	string str;
	cin >> str;
	bool snake=true,camel=true;
	int len = str.length();
	for(int i=0;i<len;i++){
		if((int)str[i]=='_' && snake){
			camel=false;
			str.erase(i,1);
			if(i!=0 && str[i]!='_') str[i] = toupper(str[i]);
			i--;
		}else if((int)str[i]>=65 && (int)str[i]<=90 && camel){
			snake=false;
			str[i] = tolower(str[i]);
			if(i!=0) str.insert(i,"_");
			len++;
		}
	}
	cout << str << endl;
	return 0;
}
