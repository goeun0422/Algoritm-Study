#include <iostream>

int NUM[100001];
int SUM[100001];

int main(){
    std::ios::sync_with_stdio(false);
std::cin.tie(NULL);
    int N;
std::cin>>N;
for(int i=1;i<=N;i++){
    std::cin>>NUM[i];
SUM[i]= SUM[i-1]+NUM[i];
}
int M;
 std::cin>>M;

 for(int i=1; i<=M; i++){
int k;
int h;
 
std::cin>>k;
std::cin>>h;

int result=0;
result=SUM[h]-SUM[k-1];

std::cout<<result<<"\n";
 }
 return 0;
}

   