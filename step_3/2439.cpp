#include<iostream>

using namespace std;

int main(){
    int k;
    cin >> k;

    for(int i = 0; i < k; i++){
        for(int j = k-i-1; j > 0; j--){
            cout << " ";
        }
        for(int l = 0; l < i+1; l++){
            cout << "*";
        }
        cout << '\n';
    }
}