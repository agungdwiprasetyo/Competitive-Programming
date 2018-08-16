// Stack Machine Simulator

#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
  	char s[1000];
  	int T;
  	scanf("%d", &T);
	while (T--){
		scanf("%s", s);
		string r = "";
		for (int i = 0; s[i]; i++){
			if (s[i]=='+') r += s[++i];
			else reverse(r.begin(), r.end());
		}
		puts(r.c_str());
	}
}