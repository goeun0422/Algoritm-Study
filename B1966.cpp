#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        int N, M;
        int count = 0;
        
        cin >> N >> M; 
        
        // 1. 일반 큐: (중요도, 인덱스) 쌍을 저장하여 순서 관리
        queue<pair<int, int>> q;
    
        // 2. 우선순위 큐: 중요도만 저장하여 최대값을 빠르게 찾음
        priority_queue<int> pq;

        for(int i = 0; i < N; i++){
            int importance; 
            cin >> importance;

            q.push({importance, i});
            pq.push(importance);
        }

        while(!q.empty()){
            int current_importance = q.front().first;
            int current_index = q.front().second;
            q.pop();

            if(current_importance == pq.top()){
                count++;
                pq.pop(); 
                
                if(current_index == M){
                    cout << count << "\n";
                    break;
                }
            } else{
                q.push({current_importance, current_index});
            }
        }
    }
    return 0;
}