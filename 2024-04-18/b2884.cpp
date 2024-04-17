#include <iostream>

using namespace std;

int main() {

    int H, M;

    cin >> H >> M;

    int m = H * 60 + M - 45;

    if (m < 0) {
        m += 60 * 24;
        printf("%d %d", m / 60, m % 60);
    }
    else printf("%d %d", m / 60, m % 60);
        

    return 0;
}