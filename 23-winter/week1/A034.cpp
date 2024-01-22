// BaekJoon
// 문제: 3052. 나머지

#include <iostream>
using namespace std;

int main(){
    int counts[42] = {};
    
    int num;
    for (int i=0; i<10; i++) {
        cin >> num;
        counts[num % 42]++;
    }
    
    int result = 0;
    for (int i : counts) {
        if (i > 0) {
            result++;
        }
    }
    
    cout << result << endl;
    
    return 0;
}
