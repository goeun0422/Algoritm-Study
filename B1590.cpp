#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, T;
    vector<int> b;
    cin >> N >> T;
    
    for (int i = 0; i < N; i++)
    {
        int S, I, C;
        cin >> S >> I >> C;        

        for(int j = 0; j < C; j++)
        {
            b.push_back(S + (I * j));
        }
    }
    sort(b.begin(), b.end());

    int low = 0;
    int high = b.size();

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (b[mid] >= T)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (low == b.size()) {
        cout << -1;
    }
    else
    {
        cout << b[low] - T;
        return 0;
    }
}