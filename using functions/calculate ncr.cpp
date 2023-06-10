#include<iostream>
using namespace std;
int factorial(int n)
{
   int fact=1;
   for(int i=2;i<=n;i++)
        {fact=fact*i;}
   return fact;
}
int main()
{
    int n,r;
    cout<<"enter the values of n and r"<<endl;
    cin>>n>>r;
    int ans= factorial(n)/(factorial(n-r)*factorial(r));
    cout<<ans<<endl;
    return 0;
}
