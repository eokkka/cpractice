#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    
    cin >> a >> b;
    cin >> c;
    
    int min= a*60 +b;
    min += c;

    int hour=(min/60)%24;
    min=(min%60);


    cout << hour << " " << min;
}