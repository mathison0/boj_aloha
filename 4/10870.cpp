#include <iostream>
using namespace std;

int Fb(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    return Fb(n-1) + Fb(n-2);
}

int main(){
    int N;
    cin >> N;
    cout << Fb(N);
}