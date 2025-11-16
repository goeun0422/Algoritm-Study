#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int parent[50];
vector<int> children[50];
bool visited[50];
int delete_node;
int cnt;

void dfs(int now){
    visited[now] = true;

    for(int next : children[now])
    {
        if(!visited[next]){
            dfs(next);
        }
    }
}

int main(){
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> parent[i];
    }
    cin >> delete_node;

    for (int i = 0; i < N; i++) {
        if (parent[i] != -1) {
            children[parent[i]].push_back(i);
        }
    }
    dfs(delete_node);
    int cnt = 0;
    for( int i = 0; i < N; i++)
    {
        if(!visited[i])
        {
            int alive_children = 0;
            for(int child : children[i])
            {
                if(!visited[child]){
                    alive_children++;
                }
            }
            if(alive_children == 0){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}