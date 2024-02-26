// 최댓값

#include <iostream>
using namespace std;

int main() {
    int num;
    int max = 0;
    int idx_i, idx_j;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cin >> num;
            if (num >= max) {
                max = num;
                idx_i = i;
                idx_j = j;
            }
        }
    }
    
    cout << max << endl;
    cout << idx_i << ' ' << idx_j << endl;
    
    return 0;
}
