// BaekJoon
// 2606. 바이러스

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v(101);
bool check[101];
int count = 0;

void dfs(int x) {
    check[x] = true;
    for (int i = 0; i < v[x].size(); i++) {
        int y = v[x][i];
        if (!check[y]){
            dfs(y);
            count++;
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    dfs(1);
    
    cout << count << endl;
    
    return 0;
}
