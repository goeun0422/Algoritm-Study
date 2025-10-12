#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T, N;
    cin >> T;

    int count0[41]; 
    int count1[41]; 

    // N=0
    count0[0] = 1; 
    count1[0] = 0;
    
    // N=1
    count0[1] = 0;
    count1[1] = 1;
    
    for(int i = 2; i <= 40; i++){
        count0[i] = count0[i - 1] + count0[i - 2];
        count1[i] = count1[i - 1] + count1[i - 2];
    }
    while(T--){
        cin >> N;
        cout << count0[N] << " " << count1[N] << "\n";
    }
    return 0;
}