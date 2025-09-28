#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, K, B;
    cin >> N >> K >> B;

    vector<bool> v(N + 1, false); // 인덱스 1부터 N까지 사용
                                  // 0: 정상 (False), 1: 고장 (True)

    for(int i = 0; i < B; i++){
        int broken_index;
        cin >> broken_index;
        v[broken_index] = true;
    }

    int broken = 0;
    int count = 0;

    for(int i = 1; i <= K; i++){
        if(v[i] == true){
            count++;
        }
    }

    int min_fix = count;

    for(int i = K + 1; i <= N; i++){
        if(v[i - K] == true){
            count--;
        }
        if(v[i] == true){
            count++;
        }
        if(count < min_fix){
            min_fix = count;
        }
    }

    cout << min_fix;
    return 0;
}