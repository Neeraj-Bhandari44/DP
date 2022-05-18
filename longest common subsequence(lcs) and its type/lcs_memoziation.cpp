#include<iostream>
#include<cstring>
using namespace std;
int const maxi=1000;
int find_lcs(string s1,string s2,int m,int n,int helper[][maxi])
{
    if(helper[m][n]!=-1)
    return helper[m][n];
    if(m==0||n==0)
    helper [m][n]=0;
    else{
    if(s1[m-1]==s2[n-1])
    helper[m][n]=1+find_lcs(s1,s2,m-1,n-1,helper);
    else{
        helper[m][n]=max(find_lcs(s1,s2,m-1,n,helper),find_lcs(s1,s2,m,n-1,helper));
    }
     return helper[m][n];
    }
   
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int m=s1.length();
    int n=s2.length();
    int helper[m+1][maxi];
    memset(helper,-1,sizeof(helper));
    int a=find_lcs(s1,s2,m,n,helper);
    cout<<a<<endl;
}