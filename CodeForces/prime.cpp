#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
const int maxx = 1e5+5;
int a[maxx];
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
vector<ii>P;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<n;i++)
    {
        if(gcd(a[i],a[i+1])!=1) P.push_back(make_pair(1,i));
    }
    cout << P.size() << endl;
    int j = 0;
    for(int i=1;i<=n;i++)
    {
        cout << a[i] <<" ";
        if(j<P.size()&&P[j].second==i)
        {
            cout << P[j].first << " ";
            j++;
        }
    }
    cout << endl;
}
