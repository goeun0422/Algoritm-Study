#include <iostream>
#include <vector>
#include <algorithm> // sort를 사용하기 위해 필요

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   int N;
   cin >> N;

   vector<int> NUM(N);
   for(int i = 0; i < N; i++){
    cin >> NUM[i];
   }

   sort(NUM.begin(), NUM.end());

   int min_add = 4;
   int left = 0;
   int right = 0;

   for(int left = 0; left < N; left++){
    while(right < N && NUM[right] - NUM[left] < 5){
        right++;
    }
    int count = right - left;
    int needed = 5 - count;
    min_add = min(min_add, needed); // min_add 변수와 needed 변수 중에서 더 작은 값을 저장
   }

   cout << min_add << endl;
   return 0;
}
