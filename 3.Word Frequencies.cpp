#include<iostream>
#include<string>
#include<map>
using namespace std;
void countWordFrequencies(string &s,int n)
{
    map<string,int>mpp;
    string word;
    for(int j=0;j<=n;j++)
    {
        if(s[j]==' ')
        {
            if(!word.empty())
            {
                mpp[word]++;
                word="";
            }
        }
        else
        {
            word+=s[j];
        }
    }
    if(!word.empty())
    {
        mpp[word]++;
    }
    for(auto it:mpp)
    {
        cout<<it.first<<": "<<it.second<<"\n";
    }
}
int main()
{
    string s;
    cout<<"Enter a sentence: ";
    getline(cin,s);
    int n=s.size();
    countWordFrequencies(s,n);
} 