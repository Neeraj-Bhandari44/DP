#include<iostream>
#include<cstring>
using namespace std;
int find_lcs(string s1,string s2,int m,int n)
{
    int helper[m+1][n+1];
    memset(helper,-1,sizeof(helper));
for(int i=0;i<=m;i++){
helper[0][i]=0;
}
for(int i=0;i<=n;i++)
{
    helper[i][0]=0;
}
for(int i=1;i<=m;i++)
{
    for(int j=1;j<=n;j++)
    {
        if(s1[i-1]==s2[j-1])
        helper[i][j]=1+helper[i-1][j-1];
        else{
            helper[i][j]=max(helper[i][j-1],helper[i-1][j]);
        }
    }
}
return helper[m][n];
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int m=s1.length();
    int n=s2.length();
    int a=find_lcs(s1,s2,m,n);
    cout<<a<<endl;
}