#include<bits/stdc++.h>
using namespace std;
//recursively
// int knapsack(int wt[],int val[],int w,int n)
// {
//     int static t[102][1002];
// memset(t,-1,sizeof(t));
//     if(n==0||w==0)
//     return 0;
//     if(t[n][w]!=-1)
//     return t[n][w];
//     if(wt[n-1]<=w)
//     return t[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
//     else if (wt[n-1]>w)
//     return t[n][w]=knapsack(wt,val,w,n-1);
// }
//iteratively
int knapsack(int wt[],int val[],int w,int n)
{
    int static t[102][1002];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<w+1;j++)
        if(i==0||j==0)
        t[i][j]=0;
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<w+1;j++)
            {
                if(wt[i-1]<=j)
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i+1]],t[i-1][j]);
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
    }
}
int main()
{
    int n,W;
    cout<<"input the size of the array"<<endl;
    cin>>n;
    cout<<"enter the weight of the bag"<<endl;
    cin>>W;
int wt[n],val[n];
for(int i=0;i<n;i++)
{
    cin>>wt[i];
}
for(int i=0;i<n;i++)
{
cin>>val[i];
}
int k=knapsack(wt,val,W,n);
cout<<k;
}