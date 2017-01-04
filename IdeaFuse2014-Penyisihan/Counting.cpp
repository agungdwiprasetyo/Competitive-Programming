/*
Problem:
Mr. Oski's nephew Mimik and Kikil are playing count. Mimik loves counting up by 7 and Kikil loves counting down by 5. Mimik begins from X, and Kikil begins from Y. If they count at the same rate, what number will they say at the same time?

For example, when Mimik starts with 100 and Kikil starts with 1000, both will say 625 at the same time.

Mr. Oski is curious about the number they will say at the same time, and he wants to know before they start playing. Help Mr. Oski to determine what number is it, or if it's impossible to get that number.
Input

Input starts with a single integer T (1 ≤ T ≤ 20) in a line denoting the number of cases. Each case consists of two integers (0 ≤ X, Y ≤ 2,000,000,000) in one line.
Output

For each case, output in a single line "Case #X: A" (without quotes), where X is the case number, starting from 1, and A is the number they will say at the same time if it is possible. If not, then output "impossible" (without quotes) for A.

Sample Input:
2
100 1000
100 1001

Sample Output:
Case #1: 625
Case #2: impossible
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,flag=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        int mimik=x;
        int kiki=y;
        while(mimik<=kiki)
        {
            if(mimik==kiki) {
                flag=1;
                break;
            }
            mimik+=7;
            kiki-=5;
        }
        if(flag) {
            printf("Case #%d: %d\n",i,mimik);
            flag=0;
        }
        else {
            printf("Case #%d: impossible\n",i);
        }
    }
    return 0;
}