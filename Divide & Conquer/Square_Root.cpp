// Finding square root of a number using Divide and Conquer //

#include<iostream>
using namespace std;

long long int squareRoot(long long int n)
{
    if(n==1 || n==0)
        return n;

    int start=1;
    int end = n/2;
    int ans;

    while(start<=end)
    {
        int mid = (start+end)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid<n)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}

int main()
{
    long long int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans = squareRoot(n);
    cout<<ans<<endl;

    return 0;
}
