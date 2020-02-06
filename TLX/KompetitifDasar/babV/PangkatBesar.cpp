// https://tlx.toki.id/courses/competitive/chapters/05/problems/B

#include <iostream>
#include <cmath>

using namespace std;
#define mod 1000000

long pangkat(long a, long b){ 
	int res = 1;
    a = a % mod;
    while (b > 0) { 
        if (b & 1) res = (res*a) % mod;
        b = b>>1;
        a = (a*a) % mod;   
    } 
    return res; 
}

int main(){
    long x, y;
    cin >> x >> y;
    long has = pangkat(x, y);
    if (pow(x, y) >= mod) {
        long tmp = has;
        int digit = 0;
        if (has == 0) digit = 1;
        while (tmp > 0) {
            digit++;
            tmp /= 10;
        }
        digit = 6 - digit;
        while (digit--) cout<<0;
        cout << has << endl;
    } else cout << has << endl;
    
    return 0;
}