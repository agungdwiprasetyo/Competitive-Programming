/*
Mr. Oski joined a reunion party where he met his old friends. He realized that in every group each person shaked hand once with each other. Then Mr. Oski found a problem, if he have a total of H handshakes, how many people were in that group?
Input

First line consists of one integer (1 ≤ N ≤ 100) representing the number of group in that reunion party. The next N lines, consists of one integer (1 ≤ Hi ≤ 10,000) represents the number of handshakes at the i-th group.
Output

Output consists of N lines, each line have an integer number of people for the i-th group.

Sample Input:
3
1
3
231

Sample Output:
2
3
22
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,hasil;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        x*=2;
        hasil=(1+sqrt(1+4*x))/2;
        printf("%d\n",hasil);
    }
    return 0;
}