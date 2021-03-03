#include<iostream>

using namespace std;

int main(){
    int a; int b;

    while(true){
        cin >> a >> b;
        if(cin.eof()) break; // end of file 파일이 끝나면 종료
        cout << a + b << '\n';
    }
}