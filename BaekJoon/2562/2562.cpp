// 최댓값

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int idx = 0, max = 0;
    for (int i = 0; i < 9; i++) {
        cin >> n;
        if (n > max) {
            max = n;
            idx = i;
        }
    }
    
    cout << max << endl << idx + 1 << endl;
    return 0;
}
