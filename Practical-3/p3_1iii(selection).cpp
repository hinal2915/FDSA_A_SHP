#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of marks: ";
    cin>>n;
    int mark[n];
    cout<<"Enter the marks: ";
    for(int i=0;i<n;i++)
    {
        cin>>mark[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(mark[j]<mark[min])
            {
                min=j;
            }
        }
        int temp=mark[i];
        mark[i]=mark[min];
        mark[min]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<mark[i]<<" ";
    }
    return 0;
}
