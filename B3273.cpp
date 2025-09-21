#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int N;
    cin >> N;

     vector<int> NUM(N);

    for(int i = 0; i < N; i++){
        cin >> NUM[i];
    }
    sort(NUM.begin(), NUM.end());

    int left = 0;
    int right = N - 1;
    int count = 0;

    int x;
    cin >> x;

    while(left < right){
        int sum = NUM[left] + NUM[right];
        if(sum == x){
            count++;
            left++;
            right--;
        }
        if(sum < x){
            left++;
        }
        if(sum > x){
            right--;
        }
    }

    cout << count << endl;
    return 0;
}