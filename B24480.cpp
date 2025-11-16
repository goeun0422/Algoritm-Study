#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>graph[100001];
vector<int> visited; // 각 정점의 방문 순서를 저장 (0이면 미방문)
int cnt = 1; 

void dfs(int u){
    visited[u] = cnt++;
    for(int next : graph[u])// 인접 리스트 adj[u] 안에 있는 모든 정수 요소를 차례대로 하나씩 꺼내,
                           // 그것을 변수 v에 할당하면서 루프를 실행
    {
        if(visited[next] == 0)
        {
            dfs(next);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, R;
    cin >> N >> M >> R;

    visited.resize(N + 1, 0); // 배열 크기 초기화

    for(int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i = 1; i <= N; i++)
    {
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }

    dfs(R);

    for(int i = 1; i <= N; i++)
    {
        cout << visited[i] << "\n";
    }
    return 0;
}