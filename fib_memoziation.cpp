#include<iostream>
#include<cstring>
using namespace std;
int find_fib(int n,int helper[])
{
    if(helper[n]==-1){
    int res;
    if(n==0||n==1)
    res= n;
    else
    res=find_fib(n-1,helper)+find_fib(n-2,helper);
    helper[n]=res;
    }
    return helper[n];
}
int main()
{
    int n;
    cin>>n;
    int helper[n+1];
    memset(helper,-1,sizeof(helper));
   int a= find_fib(n,helper);
   cout<<a<<endl;
}