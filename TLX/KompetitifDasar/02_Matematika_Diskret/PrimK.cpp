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

int main(){
	int N = 1000000;
	vector<int> vec;
	bool prime[N+1];
	memset(prime, true, sizeof(prime));
	
	for(int i=2; i*i<=N; i++){
		if(prime[i]) for(int j=i*2; j<=N; j+=i) prime[j] = false;
	}
	for(int k=2; k<=N; k++){
		if(prime[k]) vec.pb(k);
	}
	//cout << vec.size() << endl;
	int in, T;
	cin >> T;
	while(T--){
		cin >> in;
		cout << vec[--in] << endl;
	}	
    return 0;
}
