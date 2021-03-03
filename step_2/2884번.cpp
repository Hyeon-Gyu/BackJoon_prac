#include<iostream>

using namespace std;

int main(){
    int h; int m;
    cin >> h >> m;

    if(m - 45 < 0){
        h--;
        if(h < 0){h = 23;} 
        m = 60 - (m-45)*(-1);
        cout << h << ' '<< m << endl;
        exit(0);
    }
    cout << h << ' '<< m - 45 << endl;
}