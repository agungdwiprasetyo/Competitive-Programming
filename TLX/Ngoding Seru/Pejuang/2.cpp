#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,i,j;
    char c;
    cin >> n >> c >> d;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1) cout << d;
            else if(i==n/2 && i==j && n%2!=0) cout << "*";
            else cout << c;
        }
        cout << endl;
    }
    return 0;
}
