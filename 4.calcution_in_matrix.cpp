#include<iostream>
#include<vector>
using namespace std;
vector<int> rowSums(const vector<vector<int>>&mat)
{
    int n=mat.size();
    int m=mat[0].size();
    vector<int>rs(n,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            rs[i]+=mat[i][j];
        }
    }
    return rs;

}
vector<int> colSums(const vector<vector<int>>&mat)
{
    int n=mat.size();
    int m=mat[0].size();
    vector<int>cs(m,0);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cs[i]+=mat[j][i];
        }
    }
    return cs;
}
int main()
{
    int n,m;
    cout<<"Enter rows and columns: ";
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    cout<<"Enter matrix:"<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    vector<int>rowsum=rowSums(mat);
    cout<<"Row Sums: ";
    for(auto it:rowsum)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>colsum=colSums(mat);
    cout<<"Column Sums: ";
    for(auto it:colsum)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Total sum: ";
    int totalSum=0;
    for(auto it:rowsum)
    {
        totalSum+=it;
    }
    cout<<totalSum;
    return 0;

}