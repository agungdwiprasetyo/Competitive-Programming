#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,y,tes1,tes2,tes3,h=0;
    string rangking[100];
    char siswa[1000];
    char listsiswa[1000];
    cin >> t;
    for (int i=1;i<=t;i++)
    {
        int maxi=0;
        int sum[100]={0};
        cin >> x >> y;
        cin >> siswa;
        for(int j=0;j<x;j++){
            cin >> listsiswa >> tes1 >> tes2 >> tes3;
            if(tes3>maxi){
                maxi=tes3;
                rankk[z]=j;
            }
            sum[j]=tes1+tes2+tes3;
        }
        for(int l;l<x;l++){
            urut[]
        }
        for(int k=0;k<y;k++){
            cout << rangking[k] << endl;
            if(siswa==rangking[k]) cout << "YA\n";
            else cout << "TIDAK\n";
        }
    }
    return 0;
}
