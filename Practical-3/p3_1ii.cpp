#include<iostream>
using namespace std;
int main()
{
    int mark[5];
    int sheet[5];
    int i,j;
    int temp,mini;
    cout<<"Enter marks of sheet: ";
    for(i=0;i<5;i++)
    {
        cin>>mark[i];
    }
    for(i=0;i<5-1;i++)
    {
        int mini=i;
        for(int j=i+1;j<5;j++)
        {
             if(mark[j]<mark[mini])
            {
                mini=j;
            }
        }
        temp=mark[i];
        mark[i]=mark[mini];
        mark[mini]=temp;
    }
    cout<<"Sorted array: ";
    for(i=0;i<5;i++)
    {
       cout<<mark[i]<<" ";
    }
}

