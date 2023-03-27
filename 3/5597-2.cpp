#include <iostream>
using namespace std;

bool chk[32];

int main(){
    for (int i = 0; i < 20; i++){
        int x; cin >> x;
        chk[x] = true;
    }
    for (int i = 1; i <= 30; i++){
        if (chk[i] == false){ cout << i << endl;}
    }
}