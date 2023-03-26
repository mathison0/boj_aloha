#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int M = a * b;
    int c = a % b;
    while (c != 0){
        a = b;
        b = c;
        c = a % b;
    }
    cout << b << endl;
    cout << M / b;
}