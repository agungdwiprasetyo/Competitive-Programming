/*
Problem:
Deskripsi

    "An error does not become truth by reason of multiplied propagation, nor does truth become error because nobody sees it." -- Mahatma Gandhi

Pak Oski membangun sebuah startup. Idenya adalah membuat aplikasi yang dapat membantu pesulap memainkan trik. Pak Oski mulai merekrut anggota tim dan memulai pengembangan aplikasi. Sayangnya, satu minggu setelah pengembangan aplikasi dimulai, programmer yang dipekerjakan mengundurkan diri dengan berbagai alasan. Sekarang Pak Oski sedang mencari pengganti untuk posisi programmer yang kosong. Pak Oski mendengar bahwa Mikroskil mengadakan sebuah contest, IdeaFuse, salah satu kategori adalah Competitive-Programming (CP). Tanpa berpikir panjang, dia meminta bantuan tim pembuat soal untuk menjadikan idenya sebagai salah satu soal CP. Barang siapa yang dapat menyelesaikan soal tersebut, akan mendapatkan tawaran untuk bergabung dengan tim startup Pak Oski.
Format Masukan

Masukan terdiri dari 2 buah integer. (1 ≤ K ≤ 10) and (1 ≤ N ≤ 100).
Format Keluaran

Keluaran terdiri dari beberapa baris dan diformat seperti berikut:
Think of a number, any number
Multiply it by {K}
Add {KxN} to your number
Now, divide your total by {K}
Finally, subtract the result from the first number you pick
BRAVO!!!
Your answer is {N}

Contoh Masukan:
2 5

Contoh Keluaran:
Think of a number, any number
Multiply it by 2
Add 10 to your number
Now, divide your total by 2
Finally, subtract the result from the first number you pick
BRAVO!!!
Your answer is 5


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    printf("Think of a number, any number\nMultiply it by %d\nAdd %d to your number\nNow, divide your total by %d\nFinally, subtract the result from the first number you pick\nBRAVO!!!\nYour answer is %d\n",x,(x*y),x,y);

    return 0;
}
