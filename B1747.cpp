#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    
    const int MAX = 2000000; 

    vector<bool> is_prime(MAX + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = N; i <= MAX; i++) {
        if (is_prime[i]) {
            string s = to_string(i);
            string reversed_s = s;
            reverse(reversed_s.begin(), reversed_s.end());
            
            if (s == reversed_s) {
                cout << i << '\n';
                return 0;
            }
        }
    }

    return 0;
}
