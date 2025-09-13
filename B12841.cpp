#include <iostream>
#include <climits> // LLONG_MAX

long long left_sum[100001];
long long right_sum[100001];
long long cross_sum[100001];

int main(){
std::ios::sync_with_stdio(false);
std::cin.tie(NULL);
long long left[100001];
long long right[100001];
long long cross[100001];

int N;
std::cin>>N;

for(int i=1;i<=N;i++) {
std::cin>>cross[i]; 
}

for(int i=1;i<N;i++) {
std::cin>>left[i]; 
}

for(int i=1;i<N;i++) {
std::cin>>right[i]; 
}

for (int i=2;i<=N;i++) {
    left_sum[i] = left_sum[i-1] + left[i-1];
}

for (int i=N-1;i>=1;i--) {
    right_sum[i]=right_sum[i+1]+right[i];
}

long long min_dist = LLONG_MAX;
int min_idx = -1;

for (int i=1;i<=N;i++) {
    long long current_dist = left_sum[i] + cross[i] + right_sum[i];
    if (current_dist < min_dist) {
            min_dist = current_dist;
            min_idx = i;
        }
}

std::cout << min_idx << " " << min_dist << std::endl;
return 0;

}

