#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[1000];
    int i=0;
    gets(c);
    c[0]=tolower(c[0]);
    while(c[i]!='\0')
    {
        if(c[i]== ' ')
        {
            c[i+1]=tolower(c[i+1]);
        }
        i++;
    }
    i--;
    c[i]=toupper(c[i]);
    for(i;i>=0;i--)
    {
        if(c[i]==' ')
        {
            c[i-1]=toupper(c[i-1]);
        }
        cout << c[i];
    }
    cout << "\n";
    return 0;
}
