#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,i,j;
    int arr[100][100];
    cin >> x >> y;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++) cin >> arr[i][j];
    }
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            cout << arr[x-j-1][i];
            if(j!=x-1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
