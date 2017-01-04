#include<bits/stdc++.h>
using namespace std;

int main()
{
	int L,R,J,X;
	string c;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> L >> R >> J >> X >> c;
		if(c == "bayar"){
			cout << X-(L*R*J) << endl;
		}
		else cout << (-1)*(L*R*J) << endl;
	}
	return 0;
}
