BaekJoon
5598. 카이사르 암호

#include <iostream>
using namespace std;

int main(){
    string word;
    cin >> word;
    
    for (auto i = 0; i < word.length(); i++) {
        if (word[i] == 'A') {
            word[i] = 'X';
        } else if (word[i] == 'B') {
            word[i] = 'Y';
        } else if (word[i] == 'C') {
            word[i] = 'Z';
        } else {
            word[i] = word[i] - 3;
        }
    }
    
    cout << word << endl;
    
    return 0;
}
