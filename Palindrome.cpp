#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=n;
    int r,rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(t==rev)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}