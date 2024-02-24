// 킹, 퀸, 룩, 비숍, 나이트, 폰

#include <iostream>
#include <vector>
using namespace std;

int p[6] = {1, 1, 2, 2, 2, 8};
int main() {
    int n;
    vector<int> ans;
    for (int i = 0; i < 6; i++) {
        cin >> n;
        ans.push_back(p[i]-n);
        cout << ans[i] << " ";
    }
    
    return 0;
}
