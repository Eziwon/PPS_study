// BaekJoon
// 문제: 17210. 문문문

#include <iostream>
using namespace std;

int main() {
    int N, p;
    cin >> N >> p;
    
    if (N > 5) {
        cout << "Love is open door" << endl;
    }
    else {
        for (int i = 1; i < N; i++) {
            p = 1 - p;
            cout << p << endl;
        }
    }
    
    return 0;
}
