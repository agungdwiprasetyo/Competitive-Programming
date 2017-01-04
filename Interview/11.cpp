#include<bits/stdc++.h>
using namespace std;

int main(){
    char string1[200];
    char katabaru[200];
    int i, length;
    int flag = 0;
    gets(string1);
    length = strlen(string1);
    for(i;i<length;i++){
        string1[i]=tolower(string1[i]);
        if(string1[i] >= 97 && string1[i] <= 122)
        {
            katabaru[i]=string1[i];
            /*if(katabaru[i] != katabaru[length-i-1]){
                flag = 1;
                break;
            }*/
        }
        cout << katabaru[i];
        i++;
	}
/*
    if (flag) {
        printf("%s is not a palindrome", string1);
    }
    else {
        printf("%s is a palindrome", string1);
    }*/
    return 0;
}
