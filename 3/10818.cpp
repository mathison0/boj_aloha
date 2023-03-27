#include <iostream>
using namespace std;

int a[1000000];

int main(){
    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >>  a[i];
    }

    int m = a[0];
    int M = a[0];

    for (int i = 0; i < N; i++){
        if (a[i] < m) m = a[i];
        if (a[i] > M) M = a[i];
    }

    cout << m << " " << M;
}