#include <iostream>
using namespace std;

int main(){
    int N;

    cin >> N;
    
    cout.precision(7);

    cout << (double)N * 0.78 << ' ' <<  (double)N - (double)N * 0.2 * 0.22;
}