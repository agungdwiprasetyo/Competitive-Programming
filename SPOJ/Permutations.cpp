#include<bits/stdc++.h>
using namespace std;

long faktorial(int x)
{
    if(x<=1) return 1;
    else return x*faktorial(x-1);
}

int main()
{
    int i,n,r;
    int permutasi;
    cin >> i;
    while(i--)
    {
        cin >> n >> r;
        permutasi = faktorial(n)/faktorial(n-r);
        cout << permutasi << endl;
        cout << faktorial(n) << endl;
    }
    return 0;
}
