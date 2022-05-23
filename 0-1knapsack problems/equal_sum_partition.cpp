#include<iostream>
using namespace std;
bool equal_sum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
     sum+=a[i];
    }
    if(sum%2==1)
    return 0;
        int sum1=sum/2;
        int dp[n+1][sum1+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum1+1;j++)
            {
                if(i==0)
                dp[i][j]=false;
                if(j==0)
                dp[i][j]=true;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum1+1;j++)
            {
                if(a[i-1]<=j)
                dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
                else
                dp[i][j]=dp[i-1][j];
            }
        }
    return dp[n][sum1];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ab=equal_sum(a,n);
    cout<<ab<<endl;
}