#include<iostream>

using namespace std;

int main(){
    int n;
    int a; int b;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        cout << "Case #" << i <<": " << a+b << '\n';
    }
}