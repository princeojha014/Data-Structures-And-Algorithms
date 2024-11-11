#include<iostream>
using namespace std;
int main()
{
    int n,ans;
    cout<<"Enter Your Range : ";
    cin>>n;
    for(int i=1; i<n+1; i++)
    {
        ans = i + ans;
        cout<<"Sum of Digits are : "<<ans;
    }
    return 0;
}