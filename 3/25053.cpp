#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    int a[100], b[100];
    for (int i = 0; i < t; i++){
        int check[11] = {0,};
        int check2[11] = {0,};
        int sum = 0;
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> a[j] >> b[j];
        }
        for (int j = 0; j < n; j++){
            for (int k = 1; k < 11; k++){
                if (b[j] == k && check[k]==0){
                    check[k] = 1;
                    check2[k] = a[j];
                }
                else if (check[k]==1 && a[j] <= check2[k]){
                    a[j] = 0;
                }
            }
        }
        for (int j = 1; j < 11; j++){
            if (check[j] == 0){
                cout << "MOREPROBLEMS";
                break;
            }
            sum += a[j-1];
            if (j == 10) cout << sum;            
        }
    }
}