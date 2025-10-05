#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    queue<int> q;
    vector<int> v;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while(!q.empty()){
        for(int i = 0; i < K - 1; i ++){
            q.push(q.front()); 
            q.pop();
        }
        v.push_back(q.front()); 
        q.pop();
    }
    cout << "<";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) {
            cout << ", ";
        }
    }
    cout << ">" << endl;
}