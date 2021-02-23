#include<iostream>

using namespace std;

int main(){
    int a; int b;
    int c; int d; int e;

    cin >> a;
    cin >> b;

    c = b / 100; // 100의 자리

    e = b % 10; // 1의 자리

    d = (b - (c * 100 + e))/10; // 10의 자리

    cout << a * e << endl;
    cout << a * d << endl;
    cout << a * c << endl;
    cout << a * b;

    
}