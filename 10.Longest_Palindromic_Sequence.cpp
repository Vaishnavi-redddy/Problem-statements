#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>dp;
bool isPalindrome(string str)
{
    int m=str.size(),left=0,right=m-1;
    while(left<=right)
    {
        if(str[left]!=str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
string longestPalindromicSubstring(string s)
{
    string ans;
    int maxlen=0;
    int n=s.size();
    int l=0;int r=0;
    for(int l=0;l<n;l++)
    {
        for(int r=l;r<n;r++)
        {
            string str=s.substr(l,r-l+1);
            if(isPalindrome(str))
            {
                int len=r-l+1;
                if(maxlen<len)
                {
                    maxlen=max(maxlen,len);
                    ans=str;
                }
            }
        }
    }
    return ans;

}
string longestPalindromicSubstring_dp(string s)
{
    int startingIndex=0;
    int n=s.size();
    dp.resize(n,vector<int>(n,-1));
    int maxlen=1;
    for(int i=0;i<n;i++)
    {
        dp[i][i]=1;
        if(i<n-1)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                startingIndex=i;
                maxlen=2;
            }
            else
            dp[i][i+1]=0;
        }
    }
    for(int len=3;len<=n;len++)
    {
        for(int i=0;i<=n-len;i++)
        {
            int j=i+len-1;
            if(s[i]==s[j] && dp[i+1][j-1]==1)
            {
                dp[i][j]=1;
                int len=j-i+1;
                if(maxlen<len)
                {
                    startingIndex=i;
                    maxlen=max(maxlen,len); 
                }
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    return s.substr(startingIndex,maxlen);
}
int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    string answer=longestPalindromicSubstring(s);
    string answer=longestPalindromicSubstring_dp(s);
    cout<<"Longest palindromic substring is: "<<answer<<endl;

}