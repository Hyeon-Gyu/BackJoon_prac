#include<iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    cout << k << '\n';
    for(int i = 1; i < k; i++){
        cout << k - i << '\n';
    }
}