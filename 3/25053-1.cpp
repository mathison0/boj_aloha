#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++){
        cin >> n;
        int a[101], b[101];
        int check[11] = {0,};
        int sum = 0;
        int count = 0;
    
        for (int j = 1; j < n + 1; j++){
            cin >> a[j] >> b[j];

            if (a[j] >= check[b[j]]){
                check[b[j]] = a[j];
            }
        }
        for (int j = 1; j < 11; j++){
            if (check[j] == 0){
                cout << "MOREPROBLEMS" << endl;
                count = 0;
                break;
            }
            sum += check[j];
            count += 1;            
        }
        if (count == 10) cout << sum << endl;
    }
}