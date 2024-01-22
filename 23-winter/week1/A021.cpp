// BaekJoon
// 문제: 2010. 플러그

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int count = 0;
    for (int i=0; i<N; i++){
        int num;
        cin >> num;
        count += num;
    }
    count = count - N + 1;
    
    cout << count << endl;
    return 0;
}
