 #include<bits/stdc++.h>
 using namespace std;
 vector<string>ans;
 void solve(int open,int close,int n,string&ds)
 {
    if(open==0 && close==0)
    {
        ans.push_back(ds);
        return;
    }
    if(open==close)
    {
        ds+='(';
        solve(open-1,close,n,ds);
    }
    else if(open==0)
    {
        ds+=')';
        solve(open,close-1,n,ds);
    }
    else
    {
        string x=ds+'(';
        string y=ds+')';
        solve(open-1,close,n,x);
        solve(open,close-1,n,y);
    } 
 }
 int main()
 {
    int n;
    cin>>n;
    string ds;
    solve(n,n,n,ds);
    for(auto it:ans)
    {
        cout<<it<<"\n";
    }
 }