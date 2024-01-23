// BaekJoon
// 10773. 제로

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int k;
    cin >> k;
    
    vector<int> num;
    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;
        if (n == 0) {
            num.pop_back();
        } else {
            num.push_back(n);
        }
    }
    
    int total = 0;
    for (auto n : num) {
        total += n;
    }
    
    cout << total << endl;
    
    return 0;
}
