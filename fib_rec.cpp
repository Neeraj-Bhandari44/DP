#include<iostream>
using namespace std;
int find_fib(int n)
{
    if(n==0||n==1)
    return n;
    return (find_fib(n-1)+find_fib(n-2));
}
int main()
{
    int n;
    cin>>n;
    int a=find_fib(n);
    cout<<a;
}