#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,K;
    char c1[100], c2[100];
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> K;
        cin >> c1;
        cin >> c2;
        for(int j=0;j<K;j++){
            if(c1[j]==1)
            cout << c1[j] << endl;
        }
    }
    return 0;
}
