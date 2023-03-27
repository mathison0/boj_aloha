#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    int s = 1;

    for (int j = 0; j < T; j++){
        string a;
        int score = 0;
        cin >> a;

        for (int i = 0; i < a.size(); i++){

            if (a[i] == 'O'){
                score += s;
                s++;
            }
            else s = 1;
        }
        cout << score << endl;
        s = 1;
    }
}