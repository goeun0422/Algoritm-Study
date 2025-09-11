#include <iostream>
long long NUM[100001];
long long SUM[100001];
long long MUL[100001];
int main(){
    int N;
    std::cin>>N;
    for(int i=1;i<=N;i++)
    {std::cin>>NUM[i];
    SUM[i]=NUM[i]+SUM[i-1];
}
long long result=0;
for(int i=1;i<=N;i++)
{
    MUL[i]=NUM[i]*(SUM[N]-SUM[i]);
    result=MUL[i]+result;
}
std::cout<<result;

}