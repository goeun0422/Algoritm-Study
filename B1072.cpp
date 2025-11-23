#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    long long X, Y;
    cin >> X >> Y;

    long long Z = (Y * 100) / X;
    long long result;
    long long low = 0;
    long long high = 2000000000;
    
if (Z >= 99) {
        cout << -1 << endl;
        return 0;
    }

    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long Zz = ((Y + mid) * 100) / (X + mid);
        if (Zz > Z)
        {
            result = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << result << endl;
    return 0;

}