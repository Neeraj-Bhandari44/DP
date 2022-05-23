#include<iostream>
#include<cstring>
using namespace std;
int static temp[10000][100];
memset(temp,-1,sizeof(temp));
int knapsack(int a[],int b[],int n,int wt)
{
if(wt==0||n==0)
return 0;
if(temp[n][wt]!=-1)
return temp[n][wt];
if()
}
int main()
{
    int n;
    cin>>n;
    int a1[n],a2[n];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>a2[i];
    }
   int wt;
   cin>>wt;
   knapsack(a1,a2,n,wt);
}