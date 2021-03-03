#include<iostream>

using namespace std;

int main(){
    int a;
    int b;  
    int c;
    int d;
    int count = 0;
    cin >> a; // 26
    d = a;
    while(1){
        count++;
        b = d / 10 + d % 10; //2 + 6 = 8
        b = b % 10;
    
        c = (d % 10) * 10 + b; // 60 + 8 = 68
     
        if(a == c) break;
        d = c;
    }
    cout << count;
}