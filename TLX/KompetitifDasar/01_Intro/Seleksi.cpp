/*
2
3 1
P0001
P0001 10 100 100
P0002 0 0 200
P0003 1 100 100
3 2
P0001
P0001 10 100 100
P0002 0 0 200
P0003 1 100 100
 */

#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

bool sortNilai(const pair<int,int> &a,const pair<int,int> &b){
       return a.second>b.second;
}

int main(){
	vii nilai1, nilai2, nilai3;
	set<int> s1, s2, s3;
	int T,N,M;
	int val1, val2, val3;
	string siswa[100], NIM;
	cin >> T;
	for(int x=0; x<T; x++){
		bool ada = false;
		cin >> N >> M;
		cin >> NIM;
		for(int i=0; i<N; i++){
			cin >> siswa[i] >> val1 >> val2 >> val3;
			nilai1.pb(mp(i,val1));
			nilai2.pb(mp(i,val2));
			nilai3.pb(mp(i,val3));
		}
		if(N==M) ada = true;
		else{
			sort(nilai1.begin(), nilai1.end(), sortNilai);
			sort(nilai2.begin(), nilai2.end(), sortNilai);
			sort(nilai3.begin(), nilai3.end(), sortNilai);
			
			for(int i=0; i<M; i++){
				s1.insert(nilai1[i].second);
				s2.insert(nilai2[i].second);
				s3.insert(nilai3[i].second);
			}
			for(int i=0; i<M; i++){
				if(s3.size()==M){
					if(siswa[nilai3[i].first] == NIM) {
						ada = true;
						break;
					}
				}else if(s2.size()==M){
					if(siswa[nilai2[i].first] == NIM) {
						ada = true;
						break;
					}
				}else{
					if(siswa[nilai1[i].first] == NIM) {
						ada = true;
						break;
					}
				}
			}
		}
		
		if(ada) cout << "YA\n";
		else cout << "TIDAK\n";
		nilai1.clear();nilai2.clear();nilai3.clear();
		s1.clear();s2.clear();s3.clear();
	}
	return 0;
}
