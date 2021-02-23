#include<iostream>

using namespace std;

int main(){

    int a;
    cin >> a;
    if(a >= 90){cout << "A" << endl;}
    if(a < 90 && a >= 80){cout << "B" << endl;}
    if(a < 80 && a >= 70){cout << "C" <<endl;}
    if(a < 70 && a >= 60){cout << "D" <<endl;}
    if(a < 60){
        cout <<"F"<<endl;
    }

    return 0;
}