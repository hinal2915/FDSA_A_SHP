#include<iostream>
using namespace std;
int IteSea(int arr[],int n,int target)
{
    int start=0;
    int last=n-1;
    while(start<=last)
    {
        int mid=(start+last)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    return -1;
}
int RecSea(int arr[],int start,int last,int target)
{
    if(start>last)
    {
        return -1;
    }
    int mid=(start+last)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    else if(target>arr[mid])
    {
        return RecSea(arr,mid+1,last,target);
    }
    else
    {
        return RecSea(arr,start,mid-1,target);
    }
}
int main()
{
    int n;
    cout<<"Enter size of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter sorted array element : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    int r1=IteSea(arr,n,target);
    if(r1!=-1)
    {
        cout<<"Iterative Search:Element found in position "<<r1<<endl;
    }
    else
    {
        cout<<"Iterative search:Element not found "<<endl;
    }
    int r2=RecSea(arr,0,n-1,target);
    if(r1!=-1)
    {
        cout<<"Recursive Search: Element found at position "<<r2<<endl;
    }
    else
    {
        cout<<"Recursive search : Element not found "<<endl;
    }
return 0;
}
