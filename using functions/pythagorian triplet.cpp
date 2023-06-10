#include<iostream>
using namespace std;
bool check(int x, int y, int z)
{
    int a=max(a,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    if(a==y)
    {
        b=x;
        c=z;
    }
    if(a==z)
    {
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c)
        return true;
    else
        return false;
}
int main()
{
    int x,y,z;
    cout<<"enter three values"<<endl;
    cin>>x>>y>>z;
    if(check(x,y,z))
        cout<<"pythagorian triplet"<<endl;
    else
        cout<<"not a pythagorian triplet"<<endl;
    return 0;
}
