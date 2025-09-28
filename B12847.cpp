#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    long long sum = 0;

    for(int i = 0; i < m; i++){
        sum += v[i];
    }

    long long max_sum = sum;

    for(int i = m; i < n; i++){
        sum += v[i];
        sum -= v[i - m];

        if(sum > max_sum){
            max_sum = sum;
        }
    }

    cout << max_sum;

    return 0;
}