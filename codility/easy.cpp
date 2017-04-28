#include <iostream>
using namespace std;

int solution(int N) {
    int hasil, count=0, temp=0;
    while(N!=0){
        hasil = N%2;
        N/=2;
        if(hasil==1){
			if(count!=0){
				
			}
        	temp = count;
            count=0;
        }else{
            count++;
        }
        
    }
    return max;
}

int main() {
	int z,in;
	while(1){
		cin >> in;
		z = solution(in);
		cout<<z<<endl;
	}
	return 0;
}
