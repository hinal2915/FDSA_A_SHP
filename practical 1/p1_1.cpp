#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    cout<<"Enter number of items: ";
    cin>>n;
    cout<<"Number of items: "<<n<<endl;
    int arr[100];
    cout<<"Enter array elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long h;
    cout<<"Enter number of hours: ";
    cin>>h;
    h=h%n;
    cout<<"Total hours are= "<<h<<endl;
    for(i=h;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<h;i++)
    {
        cout<<arr[i]<<" ";
    }
}
