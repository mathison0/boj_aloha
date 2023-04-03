#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;


int cnt = 0;

int recursion(string s, int l, int r){
    cnt ++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(string s){
    return recursion(s, 0, s.length()-1);
}

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        string S;
        cin >> S;
        cout << isPalindrome(S) << " " << cnt << endl;
        cnt = 0;
    }
}
