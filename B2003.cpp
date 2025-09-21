#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int N;
    int M;
    cin >> N >> M;

    vector<int>NUM(N);
    for(int i = 0; i < N; i++){
        cin >> NUM[i];
    }

    int start = 0;
    int end = 0;
    int sum = 0;
    int count = 0;

    while(end < N){
        if(sum == M){
            count++;
            sum -= NUM[start];
            start++;
        }
        else if(sum < M){
            sum += NUM[end];
            end++;
        }
        else{
            sum -= NUM[start];
            start++;
        }
        while(sum >= M){
            if(sum == M){
                count++;
            }
            sum -= NUM[start];
            start++;
        }
    }
    cout << count << endl;
    return 0;
    }