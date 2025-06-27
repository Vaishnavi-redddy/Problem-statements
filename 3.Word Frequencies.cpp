#include<iostream>
#include<string>
#include<map>
using namespace std;
void countWordFrequencies(string &s,int n)
{
    map<string,int>mpp;
    string word;
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(s[j]==' ')
        {
            word=s.substr(i,j-i);
            mpp[word]++;
            i=j+1;
        }
        if(j==n-1)
        {
            word=s.substr(i,j-i+1);
            mpp[word]++;
        }
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