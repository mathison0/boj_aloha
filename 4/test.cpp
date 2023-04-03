#include <iostream>
using namespace std;

void printStars(int n){
    for (int i = 0; i < n; i++){
        cout << "*";
    }
    return;
}

int main(){
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++){
        printStars(i);
        cout << endl;
    }
}