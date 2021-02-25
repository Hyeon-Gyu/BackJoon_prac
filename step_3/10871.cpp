#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n; int k;
    int a;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(a < k){
            cout << a << " ";
        }
    }
}