/*
Problem:

Deskripsi

Pada suatu lomba, para peserta diminta untuk melempar batu sejauh-jauhnya. Nilai diperoleh dari bilangan kuadrat terdekat yang tidak lebih dari posisi batu itu mendarat. Sebagai contoh jika batu itu dilempar dan mendarat pada posisi 90, maka nilai yang diperoleh adalah 81. Dan jika batu peserta lain mendarat pada posisi 121, maka nilai yang diperoleh 121. Karena peserta perlombaan yang begitu banyak, Pak Oski yang sebagai juri kewalahan untuk mencarikan bilangan kuadrat terdekat. Bantulah Pak Oski untuk mencarikan bilangan kuadrat terdekat untuk setiap peserta.
Format Masukan

Baris pertama terdiri dari sebuah integer menyatakan jumlah peserta (1 ≤ N ≤ 20000).
N baris berikutnya terdiri dari sebuah bilangan positif tidak melebihi 2.000.000.000, yang merupakan posisi mendarat batu yang dilempar peserta.
Format Keluaran

N baris yang merupakan bilangan kuadrat terdekat dari masing-masing peserta. X^2 = Y, dimana Y merupakan bilangan kuadrat, dan X merupakan akar kuadrat dari Y.

Contoh Masukan:
5
5
90
121
100
99

Contoh Keluaran:
2^2 = 4
9^2 = 81
11^2 = 121
10^2 = 100
9^2 = 81

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,y,x,a=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        int z=sqrt(x);
        printf("%d^2 = %d\n",z,z*z);
    }
    return 0;
}