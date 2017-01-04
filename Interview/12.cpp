#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,u,d;
    int jarak=0;
    int waktu=0;
    cin >> n >> u >> d;
    while(jarak<=n)
    {
        jarak+=u;
        waktu+=1;
        if(jarak >= n) break;
        jarak-=d;
        waktu+=1;
    }
    cout << waktu << "\n";
    return 0;
}
