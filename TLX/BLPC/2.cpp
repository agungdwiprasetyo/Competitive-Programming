#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum[200]={0};
    int x[200],i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x[i];
        while(x[i]>=1){
            x[i]=x[i]/2;
            sum[i]++;
        }
    }
    for(i=0;i<n;i++) cout << sum[i] << "\n";
    return 0;
}
