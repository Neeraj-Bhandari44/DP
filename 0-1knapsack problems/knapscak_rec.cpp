#include<iostream>
using namespace std;
int knapsack (int val[],int wgt[],int n,int wt)
{
    if(wt==0||n==0)
    return 0;
    if(wgt[n-1]<=wt)
    {
        return max(val[n-1]+knapsack(val,wgt,n-1,wt-wgt[n-1]),knapsack(val,wgt,n-1,wt));
    }
    else if(wgt[n-1]>wt)
    return(knapsack(val,wgt,n-1,wt));
}
int main()
{
    int n;
    cin>>n;
    int val[n];
    int weg[n];
    for(int i=0;i<n;i++)
    {
        cin>>weg[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    int wt;
    cin>>wt;
    int a=knapsack(val,weg,n,wt);
    cout<<a<<endl;
}