// 최소, 최대

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    cout << *min_element(v.begin(), v.end()) << ' ' << *max_element(v.begin(), v.end()) << endl;
    
    return 0;
}
