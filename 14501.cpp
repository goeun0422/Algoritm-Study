#include <iostream>
#include <vector>
//dp 뒤에서 부터

using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> dpT(N + 1);
    vector<int> dpP(N + 1);

    for(int i = 1; i <= N; i++)
    {
        cin >> dpT[i] >> dpP[i];
    }

    vector<int>dp(N + 2, 0); // N+2 크기로 선언 (N+1은 퇴사일, N+2는 계산의 편의를 위해)

    for(int i = N; i >= 1; i--)
    {
        int day = i + dpT[i];
        if(day <= N + 1)
        {
            int P = dpP[i] + dp[day];
            int noP = dp[i + 1];
            dp[i] = max(P, noP);
        }
        else // day > N + 1
        {
            dp[i] = dp[i + 1];
        }
    }
    cout << dp[1];
    
    return 0;
}

