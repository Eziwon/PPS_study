// BaekJoon
// 문제: 11721. 열 개씩 끊어 출력하기

#include <iostream>
using namespace std;

int main(){
    string word;
    cin >> word;
    
    int i = 1;
    for (char ch : word) {
        cout << ch;
        if ((i % 10) == 0) {
            cout << endl;
        }
        i++;
    }
    
    return 0;
}
