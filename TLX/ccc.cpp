#include<bits/stdc++.h>
using namespace std;


int main()
{
    int A;
    int B;
    int sum;
    cin >> A >> B;
    for(int j=A;j<=B;j++){
        int counter=0;
        sum=0;
        int i=2;
        for(i;i<=j;i++)
        {
            if(j%i==0) counter++;
        }
        if(counter==1) sum++;
    }
    cout << sum << endl;
    return 0;
}
