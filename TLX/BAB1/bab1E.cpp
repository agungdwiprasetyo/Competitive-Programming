#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M[100][100];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) cin >> M[i][j];
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << M[j][i];
            if(j<2) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
