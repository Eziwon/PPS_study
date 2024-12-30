#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    
    cin >> n1 >> n2;
    
    int radius = (n1 < n2 ? n1 : n2);
    
    radius = radius * 100 / 2;
    
    cout << radius << endl;
    
    return 0;
}