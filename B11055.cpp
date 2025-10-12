#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;
    
    vector<int> A(N);
    vector<int> DP(N);

    int max_sum = 0;

    for (int i = 0; i < N; ++i){
        cin >> A[i];
        DP[i] = A[i];
        for(int j = 0; j < i; j++){
            if(A[j] < A[i]){
                DP[i] = max(DP[i], DP[j] + A[i]);
            }
        }
        max_sum = max(max_sum, DP[i]);
    }
    cout << max_sum;
    return 0;
}