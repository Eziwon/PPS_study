// 숫자의 합

#include <iostream>
using namespace std;

int main() {
    int n;
    string number;
    cin >> n >> number;
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += (number[i] - '0');
    }
    cout << res << endl;
    
    return 0;
}
