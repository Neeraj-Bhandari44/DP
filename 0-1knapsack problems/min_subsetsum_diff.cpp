#include<iostream>
using namespace std;
int min_subset(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
     sum+=a[i];
    }
 bool dp[n+1][sum+1];
 for(int i=0;i<=n;i++)
 {
     for(int j=0;j<=sum;j++)
     {
         if(j==0)
         {
            dp[i][j]=false;
         }
         if(i==0)
         {
             dp[i][j]=true;
         }
     }
 }
 for(int i=1;i<n+1;i++)
 {
     for(int j=1;j<sum+1;j++)
     {
         if(a[i-1]<=j)
         dp[i][j] |=dp[i-1][j-a[i-1]];
         else
         dp[i][j]=dp[i-1][j];
     }
 }
 int m=INT16_MAX;
 for(int i=sum/2;i>=0;i--)
 {
     if(dp[n][i]==true){
         m=sum-2*i;
         break;
     }
 } 
 return m;   
}
int main()
{
    int n;
    cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ab=min_subset(a,n);
    cout<<ab;
}