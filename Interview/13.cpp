#include<bits/stdc++.h>
using namespace std;

int main()
{
	list<int> l;
    //char kata[1023];
    string kata;
    int maks,minim;
    int i=0;
    int sum=0;
    //gets(kata); // for char
    getline(cin, kata); // for string
    cout << kata << endl;
    while(kata[i]!='\0')
    {
        kata[i]=tolower(kata[i]);
        if(kata[i]>=97 && kata[i]<=122){
			l.push_back(kata[i]-96);
        }
        i++;
    }
    l.sort();
    minim = l.front();
    maks = l.back();
    for(list<int>::iterator it=l.begin(); it!=l.end(); it++) sum+=*it;
    cout << minim << " " << maks << " " << sum << " \n";
    return 0;
}
