#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    int arr[10000];
    cin >> n >> k;
    cin >> arr[0];
    for(int i=1;i<n;i++){
        cin >> arr[i];
        if(arr[i] == arr[i-1]) sama++;
    }
    sort(arr,arr+n);
    if(arr[0] == arr[n/k]) cout << "-1" << endl;
    //cout << arr[1];
    return 0;
}
