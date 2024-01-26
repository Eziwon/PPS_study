// BaekJoon
// 16435. 스네이크버드

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, L;
    cin >> N >> L;
    
    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }
    
    sort(h.begin(), h.end());
    
    for (int i = 0; i < N; i++) {
        if (h[i] <= L) {
            L += 1;
        }
    }
    
    cout << L << endl;
    return 0;
}
