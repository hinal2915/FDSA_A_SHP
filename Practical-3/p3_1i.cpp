#include<iostream>
using namespace std;
int main()
{
    int sheet[5];
    int i,j;
    int temp;
    cout<<"Enter the sheet no: ";
    for(i=0;i<5;i++)
    {
        cin>>sheet[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
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
    for(i=0;i<5;i++)
    {
       cout<<sheet[i]<<" ";
    }

}
