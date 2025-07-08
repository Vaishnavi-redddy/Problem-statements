#include<iostream>
#include<vector>
using namespace std;
int largestSum(vector<int>nums)
{
    int n=nums.size();
    int maxsum=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=nums[j];
            maxsum=max(maxsum,sum);
        }
    }
    return maxsum;
}
int main()
{
    int n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    largestSum(nums);
}