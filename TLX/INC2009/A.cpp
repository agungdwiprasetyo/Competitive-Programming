#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,T;
    char kata[100];
    char test[100];
    cin >> test;
    cin >> T;
    int x=strlen(test);
    for(i=0;i<T;i++){
		cin >> kata;
		int y=strlen(kata);
		bool cek=false,bintang=false;
        int q=y-1;
        int j=0;
		int p=x-1;
		for(int k=0;k<x;k++){ 
			if(test[k]=='*'){  
				bintang=true;
				cek=true;
				continue;
			}
			if(bintang==false){
				if(test[j]==kata[j]) cek=true;
				else {
					cek=false;
					break;
				}
				j++;
			}
			else{
				if(test[p--]==kata[q--]) cek=true;
				else{
					cek=false;
					break;
				}
			}
		}
        if(cek) cout << kata << endl;
    }
    return 0;
}
