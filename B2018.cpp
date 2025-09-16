#include <iostream>

using namespace std;

int main(){

std::ios::sync_with_stdio(false);
std::cin.tie(NULL);

int left = 1;
int right =1;
int N;
int sum = 0;
int sol = 0;
cin >> N;

while(left <= right && right <= N+1){ 
if (sum > N){
    sum -= left;
    left++;
}
else if (sum == N){
    sol++;
    sum += right;
    right++;
}
else{
    sum += right;
    right++;
}
}
  cout << sol;  
}
