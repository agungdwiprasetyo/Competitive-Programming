/*
Problem:
Description

Nowadays, smartphones are very popular, especially in large cities with good and reliable internet connection for the smartphone users. Smartphone prices ranged from (relatively) cheap to expensive – depends on the manufacturer and the type of the smartphone. Usually for a same type of smartphone, the manufacturer also produces products with different storage capacity, of course with different prices. For example, iPhone 5S with 16GB storage is sold at IDR 10,500,000, while the same type with 64GB storage is sold at IDR 13,600,000. This usually puts the (potential) customer into a dillema: more storage means more applications can be downloaded into the machine, but it costs more money.

For the purpose of this problem, there are only 4 different storage capacities: 16GB, 32GB, 64GB, and 128GB – GB stands for "gigabyte", so 16GB means 16 gigabytes storage capacity.

It is known that:

    1GB (gigabyte) = 1,000MB (megabyte)

Thus:

    16GB = 16,000MB
    32GB = 32,000MB
    64GB = 64,000MB
    128GB = 128,000MB

Having a smartphone can be convenient for some people. You can install or download any (available) applications in your smartphone, let it be for productivity, or for entertainment. Of course, to download an application, you need free spaces in your smartphone (this is where the different storage capacities plays an important role). Each applications might need different space requirement.

Supposed you already know which applications (and their size) you want to download and use in your smartphone. Your task is to determine the least smartphone's storage capacity which can store all the chosen applications. The size of each application will be given in MB (megabyte) unit. As a side note, in reality, each application also needs spaces for its data which grow dynamically depends on the user's usage, but to simplify this problem, we'll assume no application needs space for its data, i.e. each application only requires a fixed amount of space.

For example,

Let say you want to download the following 4 applications:

    Facebook: 10,000MB
    Twitter: 5,000MB
    Angry Bird: 15,000MB
    Whatsapp: 8,000MB

The total space required to download all those applications is 10,000MB + 5,000MB + 15,000MB + 8,000MB = 38,000MB. 16GB and 32GB smartphones cannot store all those applications as their storage capacities are less than the required space (16,000MB and 32,000MB are less than 38,000MB). The least smartphone's storage capacity which can store all those applications is 64GB. Of course, (obviously) 128GB smartphones are also able to store all those applications, but 64GB is sufficient (we want the smallest one).
Input Format

The first line of input contains an integer T (1 ≤ T ≤ 50) denoting the number of cases. Each case begins with an integer N (1 ≤ N ≤ 100) denoting the number of applications which you want to download and use in the smartphone. The following N lines, each contains an integer S (1 ≤ S ≤ 128,000) denoting the space required by the application in MB unit. You are guaranteed that the total space required by all applications is no more than 128,000MB.
Output Format

For each case, output in a line the "Case #X: Y" where X is the case number starts from 1, and Y is the least smartphone's storage capacity which can store all the applications. Recall that there are only 4 different storage capacities: 16GB, 32GB, 64GB, and 128GB; and also note that there is NO SPACE between the number and the letter, e.g., it is "16GB", not "16 GB". Fail to follow the exact output format will cause you a Wrong Answer (of course, giving a wrong output will also cause a Wrong Answer, regardless of the output format).

Sample Input:
4
4
10000
5000
15000
8000
2
8000
8000
1
120000
4
8000
7000
1000
1

Sample Output:
Case #1: 64GB
Case #2: 16GB
Case #3: 128GB
Case #4: 32GB

Explanation for 2nd sample input

The total size of all applications is: 8000 + 8000 = 16,000MB. 16GB smartphone exactly fits all applications.

Explanation for 3rd sample input

There is only one application and its size is 120,000MB; you need smartphone with 128GB (128,000MB) storage capacity.

Explanation for 4th sample input

The total size of all applications is: 8000 + 7000 + 1000 + 1 = 16,001MB. 16GB (16,000MB) smartphone is not enough to store 16,001MB applications; you need smartphone with 32GB (32,000MB) storage capacity.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=1;i<=T;i++){
        int N,harga,size,sum=0;
        cin >> N;
        for(int j=0;j<N;j++){
            cin >> harga;
            sum+=harga;
        }
        if(sum<=16000) size = 16;
        else if(sum<=32000) size = 32;
        else if(sum<=64000) size = 64;
        else if(sum<=128000) size = 128;
        cout << "Case #" << i << ": " << size << "GB" << endl;
    }
    return 0;
}
