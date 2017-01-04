/*
Problem:
Description

ACM-ICPC 2010 is drawing near and your university want to select three out of N students to form the best team. The university however, has a limited budget, so they can only afford to send one team. The coach wants his best team to be the best in term of compatibility. The compatibility of a team which member is student A, B and C is calculated by PA,B * PA,C * PB,C, where Pi,j is the compatibility of student i and student j.

Given Pi,j for all pair of students, calculate the highest compatibility value that can be achieved by any team of three students.
Input Format

The first line of input contains an integer T (1 ≤ T ≤ 100) the number of cases. Each case begins with an integer N (3 ≤ N ≤ 50) the number of students. The next N lines each contains N integers Pi,j (0 ≤ Pi,j ≤ 100). The ith line and jth integer denotes the compatibility of student i with student j. You may assume Pi,j = Pj,i and Pi,i = 0.
Output Format

For each test case, output in a line the highest compatibility value that can be achieved by any team of three students.

Sample Input:
2
3
0 2 5
2 0 8
5 8 0
4
0 3 5 4
3 0 2 6
5 2 0 8
4 6 8 0

Sample Output:
80
160

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    int arr[100][100];
    cin >> t;
    for (int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for (int j=1;j<=n;j++)
           for (int k=1;k<=n;k++) cin >> arr[j][k];

        long maxi = 0;
        long total;
        for (int j=1;j<=n-2;j++)
           for (int k=j+1;k<=n-1;k++)
              for (int l=k+1;l<=n;l++)
              {
              total = (arr[j][k]*arr[j][l]*arr[k][l]);
              if(total>maxi) maxi=total;
              }
        printf("%ld\n",maxi);
    }
    return 0;
}