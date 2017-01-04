/*
Problem:
Description

General Election is over, now it is time to count the votes! There are N (2 ≤ N ≤ 5) candidates and M (1 ≤ M ≤ 100) vote regions. Given the number of votes for each candidate from each region, determine which candidate is the winner (one with the most votes).
Input Format

The first line of input contains an integer T, the number of test cases follow.
Each test case starts with an integer N and M denoting the number of candidate and number of region. The next M lines each contains N integers, v1, v2, ..., vN (0 ≤ vi ≤ 1000) the number of votes for candidate i
Output Format

For each test case, output in a line the winning candidate. You may safely assume that the winner is unique.

Sample Input:
2
3 3
159 213 450
512 890 993
215 420 397
2 5
40 64
35 12
102 58
43 15
79 41

Sample Output:
3
1

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	int N,M,T,i,j,k;
	cin >> T;
	for(i=0;i<T;i++)
	{
		int sum[5]={0};
		cin >> N >> M;
		for(j=0;j<M;j++){
			for(k=0;k<N;k++){
				cin >> x;
				sum[k] += x;
			}
		}
		int a=0;
		for(int b=1;b<N;b++)
		{
			if(sum[a]<sum[b]) a=b;
		}
		cout << a+1 << endl;
	}
	return 0;
}