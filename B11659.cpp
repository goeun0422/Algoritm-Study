#include <iostream>

int main(){

int N,M;
std::cin>>N; // 사용자로부터 N과 M의 값을 입력받습니다.
std::cin>>M; 
int NUM[100001];
int SUM[100001]; // SUM 배열은 누적 합(Prefix Sum)을 저장합니다.

// 이 반복문은 사용자로부터 N개의 숫자를 읽고 누적 합을 계산합니다.
// 누적 합(Prefix Sum)은 배열의 시작부터 현재 위치까지의 모든 숫자의 합을 의미합니다.
// 예를 들어, NUM 배열이 [10, 20, 30] 이라면, 누적 합은 다음과 같습니다.
// SUM[1] = 10
// SUM[2] = 10 + 20 = 30
// SUM[3] = 30 + 30 = 60
for(int i=0;i<N;i++) 
{
std::cin>>NUM[i]; 
SUM[i+1]=NUM[i]+SUM[i];
}
SUM[0]=0;

// 이것이 누적 합 기술의 핵심입니다.
// 인덱스 'a'부터 'b'까지의 합을 구하려면 다음 공식을 사용합니다.
// Sum(a to b) = SUM[b] - SUM[a-1]
// 이 코드에서는 누적 합이 저장되는 방식(SUM[i+1] = SUM[i] + NUM[i]) 때문에
// 공식이 `SUM[b+1] - SUM[a]`가 됩니다.
// 과정을 살펴봅시다:
// SUM[b+1]은 시작부터 `b` 인덱스에 있는 숫자까지의 모든 합입니다.
// SUM[a]는 시작부터 `a` 인덱스 *이전*에 있는 숫자까지의 모든 합입니다.
// SUM[a]를 SUM[b+1]에서 빼면, `a`부터 `b`까지의 합만 남게 됩니다.
for(int j=0;j<M;j++)
{
int a,b;
std::cin>>a;
std::cin>>b;
int result =SUM[b+1]-SUM[a];
std::cout<<result<<"\n";

}


}
