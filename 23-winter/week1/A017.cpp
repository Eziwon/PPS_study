// BaekJoon
// 문제: 1475. 방 번호

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string N;
    cin >> N;
    
    int counts[10] = {};
    for (char ch : N) {
        counts[ch-'0']++;
    }
    
    counts[6] = (counts[6] + counts[9] + 1) / 2;
    counts[9] = 0;
    
    cout << *max_element(counts, counts+10) << endl;
    
    return 0;
}
