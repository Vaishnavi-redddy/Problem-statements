#include<iostream>
#include<unordered_map>
using namespace std;
int longest_substring_without_repeating_characters(string s)
{
    // unordered_map<char,int>mpp;
    // int maxlen=0;
    // for(int i=0;i<s.size();i++)
    // {
    //     int len=0;
    //     for(int j=i;j<s.size();j++)
    //     {
    //         if(mpp.find(s[j])==mpp.end())
    //         {
    //             len++;
    //             mpp[s[j]]=1;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     maxlen=max(len,maxlen);
    // }
    // return maxlen;

    unordered_map<char,int>mpp;
    int maxlen=0;
    int j=0;
    int i=0;
    while(j<s.size())
        {
            if(mpp.find(s[j])==mpp.end())
            {
                mpp[s[j]]=j;
                j++;
            }
            else
            {
                i=max(mpp[s[j]]+1,i);
                mpp[s[j]]=j;
                j++;
            }
            maxlen=max(maxlen,j-i);
        }
    return maxlen;

    // unordered_map<char,int>mpp;
    // int i=0,maxlen=0;
    // for(int j=0;j<s.size();j++)
    // {
    //     if(mpp.find(s[j])!=mpp.end())
    //     {
    //         i=max(mpp[s[j]]+1,i);;
    //     }
    //     mpp[s[j]]=j;
    //     maxlen=max(maxlen,j-i+1);
    // }
    // return maxlen;

    }     
int main()
{
    string s;
    getline(cin,s);
    int ans=longest_substring_without_repeating_characters(s);
    cout<<"Length of the longest substring without repeating characters is: "<<ans<<endl;
}