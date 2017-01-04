#include<bits/stdc++.h>

using namespace std;

float fungsi(int x){
    float y;
    y = x*x - 7*x + 10;
    return y;
}

float deriv(float x){
    float y = 2*x - 7;
    return y;
}

float mutlak(float x, float y){
    if(x-y<0) return (-1*(x-y));
    else return (x-y);
}

int main(){
    float x[200];
    x[0] = 2.5;
    int i;
    for(i=1; i<100;i++){
        x[i] = x[i] - (fungsi(x[i-1])/deriv(x[i-1]));
        float err = mutlak(x[i],x[i-1]);
        if(err < 0.00001) break;
        cout << x[i] << endl;
    }
    cout << x[i-1] << endl;
    cout << i << endl;
    return 0;
}
