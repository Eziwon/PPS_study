// 설탕 배달

#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    int a = k / 5;
    int cnt = 0;
    while(1) {
        if (a < 0) {
            cout << "-1" << endl;
            return 0;
        }
        if ((k - (a * 5)) % 3 == 0) {
            cnt = a;
            break;
        }
        a--;
    }
    int b = (k - (a * 5)) / 3;
    cout << a + b << endl;
    
    return 0;
}
