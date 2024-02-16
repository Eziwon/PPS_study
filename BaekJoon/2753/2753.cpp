// 윤년

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int res = 0;
    if (n % 4 == 0) {
        if ((n % 400 == 0) || (n % 100 != 0)) {
            res = 1;
        }
    }
    
    cout << res << endl;
    
    return 0;
}
