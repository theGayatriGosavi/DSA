#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter no. of rows"<<endl;
    cin>>r;
    for(int i=1;i<=r;++i)  // for(int i=r;i>=1;--i)
    {
        for(int j=r;j>=i;--j)  //for(int j=1;j<=i;++j)
           {
               cout<<"* ";
           }
        cout<<endl;
    }
    return 0;
}
