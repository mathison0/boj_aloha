#include <iostream>
using namespace std;

int main(){
    int c, k;
    cin >> c;
    int a[c][1000];
    
    for (int i = 0; i < c; i++){
        cin >> k;
        int count = 0;
        int s = 0;
        for (int j = 0; j < k; j++){
            cin >> a[i][j];
            s += a[i][j];
        }
    
        for (int j = 0; j < k; j++){
            if ( s / k < a[i][j]){
                count += 1;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << ((double)count/k)*100 << '%' << endl;
    }
}