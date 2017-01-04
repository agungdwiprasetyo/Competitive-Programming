#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> P;
    P.push_back(2);

    for (int i = 3; i <= 32000; i+=2) {
        bool isprime = true;
        int tes = sqrt(i) + 1;

        vector<int>::iterator it;
        for (it = P.begin(); it != P.end(); it++) {
            if (*it >= tes) break;
            if (i % *it == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime) P.push_back(i);
    }

    int T,N,M;

    cin >> T;

    for (int j = 0; j < T; j++) {
        cin >> M >> N;
        if (M < 2) M = 2;

        int tes = sqrt(N) + 1;

        set<int> notprime;
        notprime.clear();

        vector<int>::iterator it;
        for (it = P.begin(); it != P.end(); it++) {

            if (*it >= tes) break;
            int mulai;

            if (*it >= M) mulai = (*it)*2;
            else mulai = M + ((*it - M % *it) % *it);

            for (int j = mulai; j <= N; j += *it) {
                notprime.insert(j);
            }
        }

        for (int i = M; i <= N; i++) {
            if (notprime.count(i) == 0) {
                cout << i << endl;
            }
        }

    }
    return 0;
}
