#include <iostream>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    int a[N] = {0};

    for (int i = 0; i < N; i++){
        cin >> a[i];
        if (a[i] < X){
            cout << a[i] << " ";
        }
    }
}