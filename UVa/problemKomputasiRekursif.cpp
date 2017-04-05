#include<stdio.h>

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
    int m[40][40];
} Matrix;

Matrix Obj, Nul, I;

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

int main() {
    int i, j, k, hasil;
    int n = 2;
    Matrix T, F;
    scanf("%d", &k);
    k--;
    for(i = 0; i < n; i++) scanf("%d", &F.m[0][i]);
    
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			Obj.m[i][j] = 0, I.m[i][j] = 0,
			Nul.m[i][j] = 0;
	for(i = 0; i < n; i++) I.m[i][i] = 1; // bikin mat identitas
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &Obj.m[i][j]);
	T = pangkatMatrix(n, k);
	hasil = (T.m[1][0]*F.m[0][0]) + (T.m[1][1]*F.m[0][1]);
	printf("%d\n", hasil);
    return 0;
}
