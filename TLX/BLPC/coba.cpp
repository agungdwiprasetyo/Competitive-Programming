#include<bits/stdc++.h>
using namespace std;

int main()
{
    char kata[1000];
    int n,i,j,panjang,sum=0,jumlah=0;
    cin >> n;
    for(i=0;i<=n;i++)
    {
        gets(kata);
        panjang=strlen(kata);
        for(j=0;j<panjang;j++)
        {
            if(kata[j]==' ') sum++;
        }
    }
    cout << panjang << "\n";
    return 0;
}
