#include<bits/stdc++.h>
using namespace std;

bool sortNilai(const int &a,const int&b){
       return a>b;
}

int main(){
	int X[100][100],Y[100][100];
	int M[100][100];
	int n,m,p;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin >> X[i][j];
	}
	cin >> m >> p;
	for(int j=0;j<m;j++){
		for(int k=0;k<p;k++) cin >> Y[j][k];
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			M[i][j]=0;
			for(int k = 0; k < m; k++) {
				M[i][j] += X[i][k]*Y[k][j];
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			cout << M[i][j];
			if(j<p-1) cout << " ";
		}
		cout << endl;
	}
    return 0;
}
