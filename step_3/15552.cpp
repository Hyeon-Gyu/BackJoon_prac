#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); //c언어의 printf 와 c++의 cout의 동기화를 없앰. 즉 한 언어의 함수만 사용해야함
    cin.tie(NULL);
    int k;
    int a; int b;
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> a >> b;
        cout << a + b << '\n'; // endl보다 '\n'이 더 빠르다!
    }
    return 0;
}