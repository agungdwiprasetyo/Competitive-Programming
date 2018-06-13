/**
 * Problem from https://pandaoj.com/problem/IDEAFUSE16B
 * ACM ICPC IdeaFuse 2016 problem B, solve with Breadth-First Search (BFS) algorithm.
**/

#include <bits/stdc++.h>
using namespace std;

#define rows 100
#define cols 100

struct Trace {
    int x;
    int y;
    int distance;
    int art1, art2, art3, art4;
};

int main() {
    char dataPeta[rows][cols];
    int N, M;
    Trace trace;
    cin >> N >> M;
    for (int i=1; i<=N; i++) {
        getchar();
        for (int j=1; j<=M; j++) {
            scanf("%c", &dataPeta[i][j]);
            if (dataPeta[i][j] == 'E') {
                trace.x = i;
                trace.y = j;
            }
        }
    }

    trace.distance = 0;
    trace.art1 = 0; trace.art2 = 0; trace.art3 = 0; trace.art4 = 0;

    // Start BFS
    queue<Trace> q;
    bool isVisited[rows][cols][2][2][2][2];
    memset(isVisited, false, sizeof(isVisited));
    q.push(trace);
    int distance = 0;
    int x, y, art1, art2, art3, art4;
    while(!q.empty()) {
        x = q.front().x;
        y = q.front().y;
        art1 = q.front().art1;
        art2 = q.front().art2;
        art3 = q.front().art3;
        art4 = q.front().art4;
        distance = q.front().distance;
        q.pop();

        if ((art1==1) && (art2==1) && (art3==1) && (art4==1) && (dataPeta[x][y]=='E')) {
            break;
        }

        int tmpA1=art1, tmpA2=art2, tmpA3=art3, tmpA4=art4;
        char visit;
        if (x>=1 && x<=N && y>=1 && y<=M && !isVisited[x][y][art1][art2][art3][art4]) {
            isVisited[x][y][art1][art2][art3][art4] = true;
            visit = dataPeta[x+1][y];
            if (visit != '#') {
                if (visit == '1') art1 = 1;
                if (visit == '2') art2 = 1;
                if (visit == '3') art3 = 1;
                if (visit == '4') art4 = 1;
                trace.x = x+1;
                trace.y = y;
                trace.distance = distance + 1;
                trace.art1 = art1;
                trace.art2 = art2;
                trace.art3 = art3;
                trace.art4 = art4;
                q.push(trace);
            }
            visit = dataPeta[x-1][y];
            art1=tmpA1, art2=tmpA2, art3=tmpA3, art4=tmpA4;
            if (visit != '#') {
                if (visit == '1') art1 = 1;
                if (visit == '2') art2 = 1;
                if (visit == '3') art3 = 1;
                if (visit == '4') art4 = 1;
                trace.x = x-1;
                trace.y = y;
                trace.distance = distance + 1;
                trace.art1 = art1;
                trace.art2 = art2;
                trace.art3 = art3;
                trace.art4 = art4;
                q.push(trace);
            }
            visit = dataPeta[x][y+1];
            art1=tmpA1, art2=tmpA2, art3=tmpA3, art4=tmpA4;
            if (visit != '#') {
                if (visit == '1') art1 = 1;
                if (visit == '2') art2 = 1;
                if (visit == '3') art3 = 1;
                if (visit == '4') art4 = 1;
                trace.x = x;
                trace.y = y+1;
                trace.distance = distance + 1;
                trace.art1 = art1;
                trace.art2 = art2;
                trace.art3 = art3;
                trace.art4 = art4;
                q.push(trace);
            }
            visit = dataPeta[x][y-1];
            art1=tmpA1, art2=tmpA2, art3=tmpA3, art4=tmpA4;
            if (visit != '#') {
                if (visit == '1') art1 = 1;
                if (visit == '2') art2 = 1;
                if (visit == '3') art3 = 1;
                if (visit == '4') art4 = 1;
                trace.x = x;
                trace.y = y-1;
                trace.distance = distance + 1;
                trace.art1 = art1;
                trace.art2 = art2;
                trace.art3 = art3;
                trace.art4 = art4;
                q.push(trace);
            }
        }
    }
    
    cout << distance << endl;

    return 0;
}