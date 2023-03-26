#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int t = 0;

    t = a / 5;
    if (a % 5 != 0)
    {
        t++;        
    }
    cout << t;
     
}