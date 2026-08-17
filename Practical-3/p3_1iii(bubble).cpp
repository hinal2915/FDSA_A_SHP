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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(mark[j]>mark[j+1])
            {
                int temp=mark[j];
                mark[j]=mark[j+1];
                mark[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<mark[i]<<" ";
    }
    return 0;
}
