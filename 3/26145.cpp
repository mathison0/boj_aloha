#include <iostream>
using namespace std;

int a[2001];
int b[2001][2001];

int main(){
    int N,M;
    cin >> N >> M;
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N + M; j++){
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N+M; j++){
            a[i] -= b[i][j];
            a[j] += b[i][j];  
        }
    }
    for (int i = 0; i < N + M; i++) cout << a[i] << " ";
}