#include<iostream>
using namespace std;
int lcs(string s1,string s2,int m,int n)
{
    if(m==0||n==0)
    return 0;
    if(s1[m-1]==s2[n-1])
    return 1+(lcs(s1,s2,m-1,n-1));
    else{
        return max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
    }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int m=s1.length();
    int n=s2.length();
    int a=lcs(s1,s2,m,n);
    cout<<a<<endl;
}