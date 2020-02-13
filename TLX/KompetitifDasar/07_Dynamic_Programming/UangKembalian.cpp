#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef long long ll;
typedef vector<ll> vi;

ll tabel[50000] = {0};

ll dp(vi element, ll size, int x) {
    
    for (int i = 1; i<=x; i++) {
    	ll val = INT_MAX;
    	for (int j = 0; j<size; j++) {
    		if (element[j] <= i) val = min(val, tabel[i-element[j]]+1);
    	}
    	tabel[i] = val;
    }
    
	return tabel[x];
}

int main() {
	int n;
	vi element;
	cin >> n;
	for(int i=0;i<n;i++){
		int e;
		cin >> e;
		element.pb(e);
	}
	int tukar;
	cin >> tukar;
	
	ll result = dp(element, n, tukar);
	if (result >= INT_MAX) result = -1;
    cout << result << endl;
	return 0;
}