#include<iostream>
using namespace std;

int maximumSumSubArray(int arr[],int low, int high)
{
    if(low==high)
    {
        return arr[low];
    }
    int mid = (low+high)/2;
    int left_max = -1000000;
    int sum=0;
    for(int i=mid;i>=low;i--)
    {
        sum+=arr[i];
        if(sum>left_max)
        {
            left_max=sum;
        }
    }
    int right_max=-1000000;
    sum=0;
    for(int i=mid+1;i<=high;i++)
    {
        sum+=arr[i];
        if(sum>right_max)
        {
            right_max=sum;
        }
    }
    int leftArrayMax = maximumSumSubArray(arr,low,mid);
    int rightArrayMax = maximumSumSubArray(arr,mid+1,high);
    return max(left_max+right_max,max(leftArrayMax,rightArrayMax));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ans = maximumSumSubArray(arr,0,n-1);
        cout<<ans<<endl;
    }

    return 0;
}