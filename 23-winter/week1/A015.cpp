// BaekJoon
// 문제: 2475. 검증수

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int arr[5];
    int sum = 0;
    
    for (int i=0; i<5; i++) {
        cin >> arr[i];
        sum += pow(arr[i], 2);
    }
    
    cout << sum % 10 << endl;
}
