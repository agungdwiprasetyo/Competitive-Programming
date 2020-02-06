// https://tlx.toki.id/courses/competitive/chapters/06/problems/B

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

#define pb push_back
#define FOREACH(jan, cuk) for ( jan = (cuk).begin(); jan != (cuk).end(); jan++)

using namespace std;

struct Guest {
    int begin, end;
};

bool sortByEnd(const Guest &a, const Guest &b) {
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;

    vector<Guest> v;
    for (int i=0; i<n; i++) {
        int begin, end;
        cin >> begin >> end;
        Guest g;
        g.begin = begin;
        g.end = begin+end-1;
        v.pb(g);
    }

    sort(v.begin(), v.end(), sortByEnd);
    int begin = 0, invited = 0;
    vector<Guest>::iterator it;
    FOREACH(it, v) {
        if (it->begin > begin) {
            invited++;
            begin = it->end;
        }
    }

    cout << invited << endl;

    return 0;
}