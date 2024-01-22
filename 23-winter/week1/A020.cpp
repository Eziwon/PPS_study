// BaekJoon
// 문제: 2455. 지능형 기차

#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int max = 0;
    
    for (int i=0; i<4; i++) {
        int in, out;
        cin >> out >> in;
        
        num = num - out + in;
        
        if (num > max) {
            max = num;
        }
    }
    
    cout << max << endl;
    
    return 0;
}
