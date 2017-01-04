/*
Problem:
Description

For some people, some words in Indonesian are harder to read, e.g., UNTAIAN, MAKLUMAT, PEMROGRAMAN, etc; compared to other words such as MAKAN, BELAJAR, MAIN, which are easier to read and pronounce.
In this problem, we define the hardness of a word as the number of 2-consecutive consonants plus the number of 3-consecutive vowels in the word.

Example,

    UNTAIAN has a hardness equals to 2 (NT, AIA).
    MAKLUMAT has a hardness equals to 1 (KL).
    PEMROGRAMAN has a hardness equals to 2 (MR, GR).
    MAKAN has a hardness equals to 0.
    TIDUR has a hardness equals to 0.
    MAIN has a hardness equals to 0.
    AIUEOXYZ has a hardness equals to 5 (AIU, IUE, UEO, XY, YZ).
    LIAUSVIA has a hardness equals to 2 (IAU, SV).

Given a word, you have to determine its hardness value (or output EASY if its hardness equals to 0).
Input Format

Input starts with a single integer T (1 ≤ T ≤ 100) in a line denoting the number of cases. Each case contains a string S in one line denoting the word. S consists of only uppercase letters (A-Z) which length between 1 and 50, inclusive.
Output Format

For each case, output in a single line "Case #X: A" (without quotes), where X is the case number, starting from 1, and A is the hardness of the word. If the hardness equals to 0, then output "EASY" (without quotes) for A.

Sample Input:
8
UNTAIAN
MAKLUMAT
PEMROGRAMAN
MAKAN
TIDUR
MAIN
AIUEOXYZ
LIAUSVIA

Sample Output:
Case #1: 2
Case #2: 1
Case #3: 2
Case #4: EASY
Case #5: EASY
Case #6: EASY
Case #7: 5
Case #8: 2
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,j,i,panjang,vokal=0,konsonan=0,sum=0;
    char kata[1000];
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> kata;
        panjang=strlen(kata);
        for(j=0;j<panjang;j++)
        {
            kata[j]=tolower(kata[j]);
            if(kata[j]=='a' || kata[j]=='i' || kata[j]=='u' || kata[j]=='e' || kata[j]=='o') {
                vokal++;
                konsonan=0;
            }
            else {
                vokal=0;
                konsonan++;
            }
            if(vokal>=3 || konsonan>=2) sum++;
        }
        if(sum==0) printf("Case #%d: EASY\n",i);
        else printf("Case #%d: %d\n",i,sum);
        sum=0;
        vokal=0;
        konsonan=0;
    }
    return 0;
}