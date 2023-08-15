#include<iostream>
using namespace std;

int prime(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            s+=1;
        }
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    int s=prime(n);
    if(s==2)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
}