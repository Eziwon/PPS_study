// BaekJoon
// 1193. 분수찾기

#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    
    int i = 1;
    
    while (x > i) {
        x -= i;
        i++;
    }
    
    if (i % 2 == 0) {
        cout << x << '/' << i + 1 - x << endl;
    } else {
        cout << i + 1 - x << '/' << x << endl;
    }
    
    return 0;
}
