#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the sheet number:";
    cin>>n;
    int sheet[n];
    int i,j;
    int temp;
    cout<<"Enter the sheet no: ";
    for(i=0;i<n;i++)
    {
        cin>>sheet[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(sheet[j]>sheet[j+1])
            {
                temp=sheet[j];
                sheet[j]=sheet[j+1];
                sheet[j+1]=temp;
            }
        }
    }
    cout<<"Sorted sheet: ";
    for(i=0;i<n;i++)
    {
       cout<<sheet[i]<<" ";
    }

}
