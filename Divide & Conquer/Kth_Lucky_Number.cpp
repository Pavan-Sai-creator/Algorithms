#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,k;
        cin>>a>>b>>k;
        ll low=1;
        ll high = __LONG_LONG_MAX__;
        ll ans = 0;
        ll lcm = (a*b)/(__gcd(a,b));
        while(low<high)
        {
            ll mid = (low+high)/2;
            ans = (mid/a)+(mid/b)-(mid/lcm);
            if(ans<k)
            low=mid+1;
            else
            high=mid;
        }
        cout<<low<<endl;
    }

    return 0;
}