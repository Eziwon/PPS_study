// BaekJoon
// 2822. 제출

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> scores(8);
    for (int i = 0; i < 8; i++) {
        cin >> scores[i];
    }
    vector<int> temp = scores;
    sort(scores.rbegin(), scores.rend());
    
    int sum = 0;
    vector<int> idx(5);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            if (scores[i] == temp[j]) {
                sum += scores[i];
                idx[i] = j;
                break;
            }
        }
    }
    sort(idx.begin(), idx.end());
    cout << sum << endl;
    for (int i = 0; i < 5; i++) {
        cout << idx[i]+1 << " ";
    }
    
    return 0;
}
