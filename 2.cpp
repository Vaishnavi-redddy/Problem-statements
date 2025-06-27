#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
int sum(vector<int>&a,int n)
{
    int tsum=0;
    for(int i=0;i<n;i++)
    {
        tsum+=a[i];
    }
    return tsum;
}
void average(int x,int n)
{
    cout<<"Average value is "<<(double)x/n<<'\n';
}
void maxminValue(vector<int>&a,int n)
{
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
        if(a[i]<mini)
        {
            mini=a[i];
        }
    }
    cout<<"Maximum value is "<<maxi<<"\n";
    cout<<"Minimum value is "<<mini<<"\n";
}
void countEvenOdd(vector<int>&a,int n)
{
    int cntEven=0,cntOdd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cntEven++;
        }
        else
        {
            cntOdd++;
        }
    }
    cout<<"Count of even numbers is "<<cntEven<<"\n";
    cout<<"Count of odd numbers is "<<cntOdd<<"\n";
}
void countPrime(vector<int>&a,int n)
{
    int cntPrime=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=1) continue;
        else if(a[i]==2) cntPrime++;
        else if(a[i]%2==0)continue;
        else
        {
            bool isPrime=true;
            for(int j=3;j<=sqrt(a[i]);j=j+2)
            {
                if(a[i]%j==0)
                {
                    isPrime=false;
                    break;
                }
            }
            if(isPrime)cntPrime++;
        }
    }
    cout<<"Count of prime numbers is "<<cntPrime<<"\n";
}
int main()
{
    int n;
    cout<<"Enter the size of the array"<<'\n';
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=sum(a,n);
    cout<<"Sum of all elements is "<<x<<"\n";
    average(x,n);
    maxminValue(a,n);
    countEvenOdd(a,n);
    countPrime(a,n);
    return 0;
}