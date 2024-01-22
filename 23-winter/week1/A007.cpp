// BaekJoon
// 문제: 2920. 음계

#include <iostream>
using namespace std;

int main(){
    int arr[8];
    
    for (int i=0; i<8; i++) {
        cin >> arr[i];
    }
    
    bool ascending = true;
    bool descending = true;
    
    for (int i=0; i<7; i++) {
        if (arr[i] > arr[i+1]) {
            ascending = false;
            break;
        }
    }
    
    for (int i=0; i<7; i++) {
        if (arr[i] < arr[i+1]) {
            descending = false;
            break;
        }
    }
    
    if (ascending)
        cout << "ascending" << endl;
    else if (descending)
        cout << "descending" << endl;
    else
        cout << "mixed" << endl;
    
    return 0;
}
