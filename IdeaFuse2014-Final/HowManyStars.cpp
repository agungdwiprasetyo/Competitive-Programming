/*
Problem -> https://training.ia-toki.org/problemsets/13/problems/54/

Sample Input:
4
4 2
8
1 5
2 1
2 4
3 3
6 3
6 6
7 7
10 5
0 0
3
1 1
-1 -1
0 1
0 0
3
1 3
2 6
3 9
-1000 -1000
3
0 0
-1000 1000
1000 1000

Sample Output:
Case #1: 5
Case #2: 3
Case #3: 1
Case #4: 2
*/

#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

int fpb(int x,int y) {
    if (!y) return x;
    return fpb(y,x%y);
}

int mutlak(int x) {
    if (x>0) return x;
    return -x;
}
int main() {
    int tests;
    scanf("%d",&tests);
    for (int zz = 1;zz<=tests;zz++) {
        int a,b;
        int n;
        set<ii> gradien;
        scanf("%d %d",&a,&b);
        scanf("%d",&n);
        while (n--) {
            int x,y;
            scanf("%d %d",&x,&y);
            int wew = fpb(mutlak(y-b),mutlak(x-a));
            gradien.insert(ii( (y-b)/wew,(x-a)/wew) );
        }
        printf("Case #%d: %d\n",zz,(int)gradien.size());
    }
    return 0;
}