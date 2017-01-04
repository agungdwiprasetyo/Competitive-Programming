/*
Problem:
Description

Ramu, a young child, inspired by the "success" story of Uncle Scrooge (Paman Gober), decides to learn more about business. He learnt the basic rule of business related to trading, i.e. buy low sell high.

Ramu noticed there are many shops in his village selling his favorite candy. Moreover, he also noticed that the price of those candies varies between shops. If he buys a candy from one shop and sells it again in another shop, what would be the highest profit he can get? Of course this can't be happened in reality, no shop is willing to buy any candy from its customer; however, let's assume all shops in this village are willing to buy a candy from its customer at the shop's price (i.e. if the shop sell candy at price P, then it will also buy candy at price P).

Given the price of a candy in all shops, determine the highest profit Ramu can get by buying exactly one candy from one shop and selling it to another shop.

For example, let the prices of a candy in five shops are: 7, 3, 4, 9, and 5; the highest profit can be achieved by buying from the 2ndshop at price 3 and selling it at 4th shop at price 9, with profit 9 - 3 = 6.
Input Format

Input starts with a single integer T (1 ≤ T ≤ 100) in a line denoting the number of cases. Each case begins with an integer N (2 ≤ N ≤ 100) in a single line denoting the number of shops selling candy. The following line contains N integers Pi (1 ≤ Pi ≤ 100,000) denoting the price of a candy in ith shop.
Output Format

For each case, output in a single line "Case #X: A" (without quotes), where X is the case number, starting from 1, and A is the highest profit can be achieved for that case.

Sample Input:
4
5
7 3 4 9 5
3
10 10 10
6
20 80 30 10 70 100
4
8000 2000 4000 1000

Sample Output:
Case #1: 6
Case #2: 0
Case #3: 90
Case #4: 7000


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,max,min,a,x,selisih;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        for(int j=1;j<=a;j++)
        {
            scanf("%d",&x);
            if(j==1){
                max = x;
                min = x;
            }
            else if(min>x) min=x;
            else if(max<x) max=x;
        }
        selisih=max-min;
        printf("Case #%d: %d\n",i,selisih);
    }
    return 0;
}
