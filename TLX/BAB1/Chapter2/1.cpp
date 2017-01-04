#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,T;
    char kata[100][1000];
    char test[100];
    bool cek=false,bintang=false;
    cin >> test;
    cin >> T;
    for(i=0;i<T;i++) cin >> kata[i];
    for(i=0;i<T;i++){
        int p=strlen(test);
        int q=strlen(kata[i]);
        int j=0,x=1;
        if(p==1) cek=true;
        else if(test[p-1]=='*'){
            p--;
            while(p--){
                if(test[j]==kata[i][j]) cek=true;
                else {
                    cek=false;
                    break;
                }
                j++;
            }
        }
        else if(test[0]=='*'){
            p--;
            j=1;
            while(p>0){
                if(test[p]==kata[i][q-j]) cek=true;
                else{
                    cek=false;
                    break;
                }
                j++;
                p--;
            }
        }
        else{
            for(int k=0;k<strlen(test)-1;k++){
                if(test[k]=='*'){
                    bintang=true;
                }
                if(bintang==false){
                    if(test[j]==kata[i][j]) cek=true;
                    else {
                        cek=false;
                        break;
                    }
                    j++;
                }
                else{
                    if(test[--p]==kata[i][q-x]) cek=true;
                    else{
                        cek=false;
                        break;
                    }
                    x++;
                }
            }
        }
        if(cek) cout << kata[i] << endl;
    }
    return 0;
}
