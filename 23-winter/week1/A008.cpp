// BaekJoon
// 문제: 4344. 평균은 넘겠지

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int count;
    cin >> count;
    
    for(int i=0; i<count; i++){
        int N;
        cin >> N;
        
        vector<int> scores(N);
        int total = 0;
        
        for(int j=0; j<N; j++){
            cin >> scores[j];
            total += scores[j];
        }
        
        float average = (float)total / N;
        int average_count = 0;
        
        for(int j=0; j<N; j++){
            if(scores[j] > average)
                average_count++;
        }
        
        float ratio = ((float)average_count / N) * 100;
        
        cout << fixed << setprecision(3) << ratio << '%' << endl;
    }
    
    return 0;
}
