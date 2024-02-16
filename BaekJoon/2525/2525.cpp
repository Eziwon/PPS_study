// 오븐 시계

#include <iostream>
using namespace std;

int main() {
    int h, m, t;
    cin >> h >> m >> t;
    
    m = m + t;
    while(m >= 60) {
        m -= 60;
        h += 1;
        if (h == 24) h = 0;
    }
    cout << h << " " << m << endl;
    
    return 0;
}
