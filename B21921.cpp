#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, X;
    cin >> N >> X;

    vector<int> v(N);

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    long long sum = 0;

    for(int i = 0; i < X; i++){
        sum += v[i];
    }

    long long max_sum = sum;
    int count = 1; // 초기 최대값 기간은 1개

    for(int i = X; i < N; i++){
        sum += v[i];
        sum -= v[i - X];

    if(sum > max_sum){
        max_sum = sum;
        count = 1;
    }
    else if(sum == max_sum){
        count ++;
    }
}

    if(max_sum == 0){
        cout << "SAD";
    }
    else{
        cout << max_sum << '\n';
        cout << count;
    }

    return 0;
}