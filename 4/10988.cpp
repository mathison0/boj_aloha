#include <iostream>
#include <string>
using namespace std;

int isPalindrome(string s){
    int a = s.length();
    int x = 1;
    for (int i = 0; i < a/2 ; i++){
        if (s[i] != s[a-i-1]){
            x = 0;
        }
    }
    return x;

}

int main(){
    string s;
    cin >> s;
    cout << isPalindrome(s);
}