#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long int a,b,c,d,e=0,f=0;
    cin>>a >>b >>c >>d;

    e=pow(a,b);
    f=pow(c,d);
    if(e>f)
    {
        cout<<"YES\n";
    }
    else if(e==f)
    {
        cout<<"NO\n";
    }
    else if(e<f)
    {
        cout<<"NO\n";
    }
    return 0;
}
