#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> e[1001];
bool visited[1001];

void dfs(int u){
    visited[u] = true;

    for(int v : e[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    int N, M;
    int a, b;
    cin >> N >> M;
    
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    int count = 0;

    for(int i = 1; i <= N; i++)
    {
        if(!visited[i]){
            dfs(i);
            count++;
        }
    }
    cout << count;
    return 0;
}