#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    int a[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m;
    for (int i = 0; i < t; i++){
        cin >> y >> m;
        if (m == 1){
            cout << y - 1 << " " << 12 << " " << 31;
        }
        else {
            cout << y << " " << m - 1 << " ";
            if ( m == 3 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)){
                cout << 29; }
            else cout << a[m-1];
        }
        cout << endl;
    }
}