#include<bits/stdc++.h>
using namespace std;

int main()
{
    char kata1[1000];
    char kata2[1000];
    int flag=0,j=0,i;
    cin >> kata1;
    cin >> kata2;
    int p=strlen(kata1);
    for(i=0;i<p;i++)
    {
        if(strlen(kata2)!=p-1) break;
        if(kata1[i]!=kata2[j]){
            flag++;
        }
        else j++;
    }
    if(flag==1) cout << "Tentu saja bisa!" << endl;
    else cout << "Wah, tidak bisa :(" << endl;
    return 0;
}
