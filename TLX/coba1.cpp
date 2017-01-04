#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int flag=0;
        long x;
        cin >> x;
        int z=(int) sqrt(x);
        for(int i=1;i<=z;i++)
        {
            if(x%i==0) flag++;
            if(flag>2) break;
        }
        if(flag<=2) cout << "YA" << endl;
        else cout << "TIDAK" << endl;
    }
    return 0;
}
