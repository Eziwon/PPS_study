// BaekJoon
// 2588. 곱셈

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int first, second;
    int result[4] = {};
    
    cin >> first >> second;
    
    result[0] = first * (second % 10);
    result[1] = first * (second % 100 / 10);
    result[2] = first * (second / 100);
    result[3] = first * second;
    
    cout << result[0] << endl << result[1] << endl << result[2] << endl << result[3] << endl;
    
    return 0;
}
