// BaekJoon
// 2805. 나무 자르기

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> trees(N);
    
    for (int i = 0; i < N; i++) {
        cin >> trees[i];
    }
    
    int start = 0;
    int end = *max_element(trees.begin(), trees.end());
    int result = 0;
    
    while (start <= end) {
        long long int total = 0;
        int mid = (start + end) / 2;
        for (int i = 0; i < N; i++) {
            if (trees[i] > mid) {
                total += (trees[i] - mid);
            }
        }
        if (total < M) {
            end = mid - 1;
        } else {
            result = mid;
            start = mid + 1;
        }
    }
    
    cout << result << endl;
    
    return 0;
}
