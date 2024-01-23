// BaekJoon
// 1316. 그룹 단어 체커

#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();
    
    string word;
    int count = 0;
    for (int i = 0; i < N; i++) {
        getline(cin, word);
        
        bool alpha[26] = {false};
        alpha[(int)(word[0]) - 97] = true;
        for (auto j = 1; j < word.length(); j++) {
            if (word[j] == word[j-1]) {
                continue;
            } else if ((word[j] != word[j-1]) && (alpha[(int)(word[j]) - 97] == true)) {
                count++;
                break;
            } else {
                alpha[(int)(word[j]) - 97] = true;
            }
        }
    }
    
    cout << N - count << endl;
    
    return 0;
}
