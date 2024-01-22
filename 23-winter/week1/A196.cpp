// BaekJoon
// 문제: 10807. 개수 세기

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    int v;
    cin >> v;
    
    int count = 0;
    for (int  i = 0; i < N; i++) {
        if (nums[i] == v) count++;
    }
    
    cout << count << endl;
    
    return 0;
}
