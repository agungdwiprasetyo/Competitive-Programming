/*
Problem:

Deskripsi

Pak Oski kedatangan tamu dari luar kota. Tamu yang datang ternyata adalah adik Pak Oski. Adik Pak Oski selalu datang beserta dua anaknya. Dikarenakan keponakan Pak Oski masih kecil, mereka sangat senang bermain. Keponakannya bernama Mimik dan Kikil. Agar mereka dapat bermain Pak Oski mengeluarkan setumpuk gelas plastik untuk disusun. Mimik dan Kikil bergantian mengambil 1 gelas dari tumpukan tersebut 1 per 1, dan membangun tumpukan sendiri. Ketika semua gelas telah dipakai, terkadang salah satu tumpukan gelas lebih tinggi dari yang lainnya. Hal ini mengakibatkan salah satu keponakannya sedih dan menangis. Tak ingin hal tersebut terjadi, Pak Oski terkadang harus mengambil 1 gelas dahulu dan kemudian sisanya diberikan kepada 2 keponakannya. Namun karena terlalu sibuk berbicara dengan adiknya, Pak Oski bisa salah menentukan perlu atau tidaknya sebuah gelas diambil. Bantulah Pak Oski untuk menentukan perlu atau tidaknya sebuah gelas tersebut diambil sebelum diberikan ke Mimik dan Kikil.
Format Masukan

Masukan terdiri dari sebuah integer (4 ≤ N ≤ 100) menyatakan jumlah gelas yang dimiliki Pak Oski.
Format Keluaran

Keluaran menyatakan perlu atau tidaknya sebuah gelas diambil. Jika perlu keluarkan "Perlu" dan "Tidak" untuk sebaliknya (tanpa tanda kutip).

Contoh Masukan 1:
5

Contoh Keluaran 1:
Perlu

Contoh Masukan 2:
6

Contoh Keluaran 2:
Tidak

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	scanf("%d",&x);
	if(x%2) printf("Perlu\n");
	else printf("Tidak\n");
	return 0;
}