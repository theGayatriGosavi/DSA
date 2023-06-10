#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int32_t main()
{
    int n;
    cout<<"enter a binary no."<<endl;
    cin>>n;
    if(n==0 || n==1)
       cout<<binaryToDecimal(n)<<endl;
    else
       cout<<"ERROR:Not a binary no."<<endl;
    return 0;
}
