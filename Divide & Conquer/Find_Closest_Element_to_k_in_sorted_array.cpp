#include<iostream>
using namespace std;

int findClosest(int arr[],int n,int k)
{
    if(k<=arr[0])
    return arr[0];
    if(k>=arr[n-1])
    return arr[n-1];

    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(k==arr[mid])
        return arr[mid];
        if(k<arr[mid])
        {
            if(mid!=0 && k>arr[mid-1])
            {
                if((k-arr[mid-1])<arr[mid]-k)
                return arr[mid-1];
                else
                return arr[mid];
            }
            else
            high=mid-1;
        }
        else{
            if(mid<n-1 && k<arr[mid+1])
            {
                if((k-arr[mid])<(arr[mid+1]-k))
                return arr[mid];
                else
                return arr[mid+1];
            }
            else
            low=mid+1;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int k;
        cin>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<findClosest(arr,n,k);
    }
    return 0;
}