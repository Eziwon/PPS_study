// BaekJoon
// 3059. 등장하지 않는 문자의 합

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int T;
    cin >> T;
    cin.ignore();
    
    string str;
    for (int i = 0; i < T; i++) {
        bool alpha[26] = {false,};
        getline(cin, str);
        
        for (auto ch : str) {
            if (alpha[(int)ch - 65] == false) {
                alpha[(int)ch - 65] = true;
            }
        }
        
        int total = 0;
        for (int i = 0; i < 26; i++) {
            if (alpha[i] == false) {
                total += (i + 65);
            }
        }
        
        cout << total << endl;
    }
    
    return 0;
}
