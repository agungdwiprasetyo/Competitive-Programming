/*
Problem:

Deskripsi

Diberikan sebuah bilangan pecahan, tentukan apakah pecahan tersebut dapat disederhanakan atau tidak.
Format Masukan

Masukan terdiri dari 2 buah bilangan (1 ≤ A) dan (A < B ≤ 1000). Bilangan pecahan yang diberikan adalah A/B.
Format Keluaran

Jika pecahan dapat disederhanakan, maka outputkan pecahan paling sederhana ke format "A B". Jika pecahan tidak dapat disederhanakan output "Tidak" tanpa tanda kutip.

Contoh Masukan 1:
2 4

Contoh Keluaran 1:
1 2

Contoh Masukan 2:
6 15

Contoh Keluaran 2:
2 5

Contoh Masukan 3:
2 5

Contoh Keluaran 3:
Tidak

*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if(!y) return x;
    return gcd(y,x%y);
}

int main()
{
    int x,y,z;
    cin >> x >> y;
    z=gcd(x,y);
    if(z==1) cout << "Tidak\n";
    else {
        cout << x/z << " " << y/z <<"\n";
    }
    return 0;
}