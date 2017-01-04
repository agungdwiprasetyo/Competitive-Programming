/*
Problem -> https://training.ia-toki.org/problemsets/28/problems/147/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    string anggota[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cin >> anggota[i];
    }
    for(i=0;i<(n+1)/2;i++)
    {
        cout << anggota[i] << "\n";
        if(i==(n)/2) break;
        cout << anggota[n-i-1] << "\n";

    }
    return 0;
}