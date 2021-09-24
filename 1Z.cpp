#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long a,b,c,d,e,f;
    cin>>a >>b >>c >>d;
    e=pow(a,b);
    f=pow(c,d);
    if(e>f)
    {
        cout<<"YES";
    }
    else if(e==f||e<f)
    {
        cout<<"NO";
    }
    return 0;
}
