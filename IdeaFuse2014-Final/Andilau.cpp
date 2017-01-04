/*
Problem: https://training.ia-toki.org/problemsets/28/problems/145/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    double hasil,a;
    scanf("%lld",&n);
    a=(double) n;
    hasil=(double)((a-1)/2)*(a/2);
    printf("%.2lf\n",hasil);
    return 0;
}