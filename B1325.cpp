#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring> // memset을 사용하기 위해 필요
// B를 해킹하면 A를 해킹한다 B -> A

using namespace std;

int N, M;
vector<int>graph[10001];
bool visited[10001];
int result[10001];
int max_count = 0;
int cnt;

void dfs(int now){
    visited[now] = true;
    cnt++;
    
    for(int next : graph[now])
    {
        if(!visited[next]){
            dfs(next);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    for(int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[b].push_back(a);
    }
    for(int i = 1; i <= N; i++)
    {
        memset(visited, false, sizeof(visited));
        // memset(메모리 시작 주소, 채울 값, 채울 크기(바이트));
        cnt = 0;
        dfs(i);
        result[i] = cnt;

        if(cnt > max_count)
        {
            max_count = cnt;
        }
    }
    for(int i = 1; i <= N; i++)
    {
        if(result[i] == max_count)
        {
            cout << i << " ";
        }
    }
    return 0;
}