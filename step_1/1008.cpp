#include<iostream>

using namespace std;

int main(){
    double a; double b; double c;
    cout << fixed;
    cout.precision(30);
    
    cin >> a >> b;
    c = a / b;
    cout << c;
    return 0;
}