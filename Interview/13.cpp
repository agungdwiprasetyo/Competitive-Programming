#include<bits/stdc++.h>
using namespace std;

int main()
{
    char kata[1023];
    char katabaru[1023];
    int maks=0,minim=26,angka;
    int i=0;
    int sum=0;
    gets(kata);
    while(kata[i]!=NULL)
    {
        kata[i]=tolower(kata[i]);
        if(kata[i]>=97 && kata[i]<=122){
            katabaru[i]=kata[i];
            angka=katabaru[i]-96;
            if(angka>maks) maks=angka;
            if(angka<minim) minim=angka;
            sum+=angka;
        }
        i++;
    }
    cout << katabaru << " " << minim << " " << maks << " " << sum << " \n";
    return 0;
}
