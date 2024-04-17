#include <iostream>
using namespace std;

int main(){
    int x, n, price=0;

    cin >> x;
    cin >> n;


    for(int i=0;i<n;i++){
        int a[n], b[n];
        cin >> a[i] >> b[i];
        price += a[i]*b[i];
        
    }
    if(price==x){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}