#include <cstdio>
#include <vector>
using namespace std;


class RuteKereta {
public:
	int harga;
	int keindahan;
	RuteKereta (int tk, int tv) {
		harga = tk;
		keindahan = tv;
	}
};

int n, s, p;
int tk, tv;
vector<RuteKereta> ruteKeretas;

long long int keindahanMax(int indexKota, int sisaUang) {
	if (indexKota == n) {
		return (sisaUang < 0)*-1;
	}

	if (sisaUang <0 ) return -1;


	long long int keindahan = -1;
	long long int keindahanSementara = -1;



	// Via pesawat
	for (int i=indexKota+1; i<=n; i++) {
		keindahanSementara = keindahanMax(i, sisaUang-p);
		if (keindahan < keindahanSementara) {
			keindahan = keindahanSementara;
		}
	}

	// Via kereta
	RuteKereta rkSekarang = ruteKeretas[indexKota];
	if (sisaUang-rkSekarang.harga >= 0) {
		keindahanSementara = keindahanMax(indexKota+1, sisaUang-rkSekarang.harga);
		if (keindahanSementara >= 0 && keindahan < rkSekarang.keindahan + keindahanSementara) {
			keindahan = rkSekarang.keindahan + keindahanSementara;
		}
	}


	return keindahan;



}




void kasusUji() {
	ruteKeretas.clear();
	long int totalHargaKereta = 0;
	scanf("%d %d %d", &n, &s, &p);
	for (int i=1; i<n; i++) {
		scanf("%d %d", &tk, &tv);
		RuteKereta newRK(tk, tv);
		ruteKeretas.push_back(newRK);
		totalHargaKereta += tk;
	}
	n--;

	// CHECK
	if (totalHargaKereta > s && p > s) {
		printf("-1\n");
	}
	else printf("%lld\n", keindahanMax(0, s));

}


int main() {
	int t;
	scanf("%d", &t);

	for (int i=0; i<t; i++) {
		kasusUji();
	}
	// your code goes here
	return 0;
}
