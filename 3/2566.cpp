#include <iostream>
using namespace std;

int a[9][9];

int main(){
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> a[i][j];
        }        
    }

    int M = 0;
    int x, y;
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if (a[i][j] >= M){
                M = a[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }
    cout << M << endl;
    cout << x << " " << y;
}