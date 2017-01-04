/*
Problem:

Deskripsi

IdeaFuse merupakan kompetisi bisnis dan informatika yang diselenggarakan oleh STMIK - STIE Mikroskil untuk tingkat perguruan tinggi dan sekolah di Sumatera. Bertujuan sebagai ajang uji kemampuan dalam berbagai kategori di bidang bisnis dan informatika bagi mahasiswa dan siswa.

IdeaFuse merupakan kompetisi yang diselenggarakan setiap tahun, sehingga alamat website IdeaFuse terdapat directory tahun. Sebagai contoh tahun ini 2014, maka alamat websitenya adalah http://ideafuse.mikroskil.ac.id/2014/. Tahun depan (2015), maka alamat websitenya adalah http://ideafuse.mikroskil.ac.id/2015/.

Diberikan tahun, hasilkanlah alamat website IdeaFuse pada tahun tersebut.
Format Masukan

Masukan terdiri dari sebuah integer (2014 ≤ N ≤ 2099) menyatakan Tahun.
Format Keluaran

Keluaran berupa alamat website IdeaFuse pada tahun tersebut.

Contoh Masukan 1:
2014

Contoh Keluaran 1:
http://ideafuse.mikroskil.ac.id/2014/

Contoh Masukan 2:
2015

Contoh Keluaran 2:
http://ideafuse.mikroskil.ac.id/2015/

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	scanf("%d",&x);
	printf("http://ideafuse.mikroskil.ac.id/%d/\n",x);
	return 0;
}