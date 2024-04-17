#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    int a[3];

    cin >> a[0] >> a[1] >> a[2];

    sort(a, a+3);

    int money;

    if(a[0] == a[2]){
        money=10000+a[0]*1000;
    }
    else if(a[0]==a[1] || a[1]==a[2]){
       money=1000+a[1]*100;
    }
    else{
            money=a[2]*100;
    }

    cout << money;
}