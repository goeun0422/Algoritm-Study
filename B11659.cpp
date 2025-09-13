#include <iostream>

int main(){

int N,M;
std::cin>>N; 
std::cin>>M; 
int NUM[100001];
int SUM[100001]; 

for(int i=0;i<N;i++) 
{
std::cin>>NUM[i]; 
SUM[i+1]=NUM[i]+SUM[i];
}
SUM[0]=0;

for(int j=0;j<M;j++)
{
int a,b;
std::cin>>a;
std::cin>>b;
int result =SUM[b+1]-SUM[a];
std::cout<<result<<"\n";

}


}
