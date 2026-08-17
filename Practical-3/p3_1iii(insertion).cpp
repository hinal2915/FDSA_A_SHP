#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of marks ";
    cin>>n;
    int mark[n];
    cout<<"Enter marks ";
    for(int i=0;i<n;i++)
    {
        cin>>mark[i];
    }
    for(int i=1;i<n;i++)
    {
        int key=mark[i];
        int j=i-1;
        while(j>0 && mark[j]>key)
        {
            mark[j+1]=mark[j];
            j--;
        }
        mark[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<mark[i]<<" ";
    }
    return 0;
}
