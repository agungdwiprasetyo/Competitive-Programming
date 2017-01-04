#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, K, A[10], minim =0, maksi=0;
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> K;
        for(int j=0;j<K;j++){
            for(int n=0;n<3;n++){
                cin >> A[n];
            }
            sort(A,A+3);
            minim += A[0];
            maksi += A[2];
        }
        cout << minim << " " << maksi << endl;
        minim = 0;
        maksi = 0;
    }
    return 0;
}
