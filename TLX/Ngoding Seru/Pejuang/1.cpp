#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x,a=0,b,c;
    int baru[1000];
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        if(i==0) {
            max=arr[0];
            min=arr[0];
        }
        if(min>arr[i]) min=arr[i];
        if(max<arr[i]) max=arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout << baru[i] << endl;
    }
    return 0;
}
