#include <iostream>
using namespace std;

int main(){
    int t=0;
   

    cin >> t;

    for(int i=0;i<t;i++){
        int a[t], b[t];
        cin >> a[i] >> b[i];
        cout << a[i]+b[i] << "\n";
    }
}