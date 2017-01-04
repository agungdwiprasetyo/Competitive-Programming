#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,K,M[50],stat = 0;
    char c[100][50];
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> N >> K;
        for(int j=0;j<K;j++){
            cin >> M[j] >> c[j];
        }
        for(int j=1;j<=N;j++){
            for(int wk=0;wk<K;wk++){
                if(j%M[wk] == 0){
                    cout << c[wk];
                    stat = 1;
                }
            }
            if(!stat) cout << j << endl;
            else cout << endl;
            stat = 0;
        }
    }
    return 0;
}
