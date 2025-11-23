#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N;
    
    vector<int> A(N);

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    cin >> M;
    for(int i = 0; i < M; i++)
    {
        int target;
        cin >> target;
        int low = 0;
        int high = N - 1; //?
        bool find = false;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if (A[mid] == target)
            {
                find = true;
                break;
            }
            else if (A[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            
        }
        if(find){
            cout << 1 << " ";
        }
        else cout << 0 << " ";
    }
    return 0;
}