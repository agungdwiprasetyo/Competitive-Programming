#include<bits/stdc++.h>

using namespace std;

/*
 * Ex: f(x) = f(x-1)+f(x-2) -> fibonacci
 * f(0) = 0
 * f(1) = 1
 * 
 * T = Matrix 2*2 (kasus fibonacci), tergantung basis rekursif dan fungsi rekursifnya
 * 
 * |f(1)| = T |f(0)|
 * |f(2)|     |f(1)|
 * 
 * T = |0 1|
 *     |1 1|
 * .....
 * |f(n-1)| = T^(n-1) |f(0)|
 * |f(n)  |           |f(1)|
 * 
 * problem untuk menemukan nilai ke-n dari fungsi rekursif dapat dipecahkan dengan matriks eksponensial
*/

typedef struct {
    long long m[40][40];
} Matrix;

Matrix Obj, Nul, I;
int fiboN;

Matrix kaliMatrix(Matrix X, Matrix Y, int n) {
    Matrix M = Nul;
    int i, j, k;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            for(k = 0; k < n; k++) {
                M.m[i][k] += X.m[i][j]*Y.m[j][k];
            }
    return M;
}

Matrix pangkatMatrix(int n, int k) {
    Matrix X = I, Y = Obj;
    while(k) {
        if(k&1) X = kaliMatrix(X, Y, n);
        Y = kaliMatrix(Y, Y, n);
        k /= 2;
    }
    return X;
}

long long fiboRekursif(int n){
	if(n<=1) return 1;
	else return fiboRekursif(n-1)+fiboRekursif(n-2);
}

void solveMainstream(){
	long long hasil;
	hasil = fiboRekursif(fiboN);
	printf("Hasil (cara rekursif): %lld\n",hasil);
}

void solve(){
	int i, j;
	long long hasil;
	int n = 2;
	Matrix T, F;
	fiboN--;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			Obj.m[i][j] = 0;
			I.m[i][j] = 0;
			Nul.m[i][j] = 0;
		}
	}
	for(i = 0; i < n; i++) I.m[i][i] = 1; // bikin mat identitas
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i) Obj.m[i][j] = 1;
			else Obj.m[i][j] = j;
		}
		F.m[0][i] = i;
	}
	T = pangkatMatrix(n, fiboN);
	hasil = (T.m[1][0]*F.m[0][0]) + (T.m[1][1]*F.m[0][1]);
	printf("Hasil (cara matrix)  : %lld\n", hasil);
}

int main() {
	scanf("%d",&fiboN); // cari fib(N)
	clock_t mulai1 = clock(); // mulai timer
	solve();
	clock_t finish1 = clock(); // stop timer
	double timeExec1 = (double)(finish1 - mulai1) / CLOCKS_PER_SEC;
	printf("Time Execution (cara matrix)  : %f sekon\n", timeExec1);

	printf("\n");
	clock_t mulai2 = clock(); // mulai timer
	//solveMainstream();
	clock_t finish2 = clock(); // stop timer
	double timeExec2 = (double)(finish2 - mulai2) / CLOCKS_PER_SEC;
	printf("Time Execution (cara rekursif): %f sekon\n", timeExec2);
	
	printf("\nOptimasi: %.0fx\n",(double)(timeExec2/timeExec1));
	return 0;
}
