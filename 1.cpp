#include<iostream>
#include<cmath>
using namespace std;
bool isEven(int value)
{
    return (value%2==0);
}
void checkSign(int value)
{
    if(value==0)
    {
        cout<<value<<" is zero"<<"\n";
    }
    else if(value>0)
    {
        cout<<value<<" is positive"<<"\n";
    }
    else
    {
        cout<<value<<" is negative"<<"\n";
    }
}
bool isPrime(int value)
{
    int cnt=0;
    if(value<=1 || (value>2 && value%2==0))
    {
        return false;
    }
    else if(value==2)
    {
        return true;
    }
    else
    {
        for(int i=3;i<=sqrt(value);i=i+2)
        {
            if(value%i==0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int value;
    cout<<"Enter a number"<<"\n";
    cin>>value;
    if(isEven(value))
    {
        cout<<value<<" is even"<<"\n";
    }
    else
    {
        cout<<value<<" is odd"<<"\n";
    }
    checkSign(value);
    if(isPrime(value))
    {
        cout<<value<<" is a Prime Number"<<"\n";
    }
    else
    {
        cout<<value<<" is not a Prime Number"<<"\n";
    }
    return 0;
}