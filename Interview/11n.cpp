#include<bits/stdc++.h>
using namespace std;

int main()
{
    char kata[1000];
    char baru[1000];
    int length;
    int ln;
    int i=0,j=0;
    gets(kata);
    length=strlen(kata);
    for(i;i<length;i++)
    {
        kata[i]=tolower(kata[i]);
        if(kata[i]>=97 && kata[i]<=122)
        {
            baru[i]=kata[i];
        }
        //else j--;
        //
        j++;
    }
    cout << baru;
    j=0;
    ln=strlen(baru);
    /*for(i=0;i<ln;i++)
    {
        if(baru[i] != baru[ln-i-1])
        {
            j = 1;
            break;
        }
    }
    if(j) cout << "NOT PALINDROME\n";
    else cout << "PALINDROME\n";
        */
    cout << "\n";
    return 0;
}
