#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,T;
    long y;
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> x;
        long long hasil = 0;
        for(int j=0;j<x;j++){
            cin >> y;
            hasil+=y;
        }
        cout << hasil << endl;
    }
    return 0;
}
