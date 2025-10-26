#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long N;
    int L;
    cin >> N >> L;

    for (int k = L; k <= 100; k++) {
        
        long long sum_of_diff = (long long)k * (k - 1) / 2;
        long long kx = N - sum_of_diff;
        
        if (kx < 0) {
            break; 
        }

        if (kx % k == 0) {
            long long x = kx / k; 
            
            for (int i = 0; i < k; i++) {
                cout << x + i << (i == k - 1 ? "" : " ");
            }
            cout << "\n";
            return 0; 
        }
    }
    
    cout << -1 << "\n";
    
    return 0;
}