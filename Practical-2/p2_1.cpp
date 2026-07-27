#include<iostream>
using namespace std;
int IteSea(string plates[],int n,string target)
{
    for(int i=0;i<n;i++)
    {
        if(plates[i]==target)
        {
            return i;
        }
        return -1;
    }
}
int RecSea(string plates[],int n,string target,int index)
{
    if(index==n)
    {
        return -1;
    }
    if(plates[index]==target)
    {
        return index;
    }
    RecSea(plates,n,target,index+1);
}
int main()
{
    int n;
    cout<<"Enter the number of vehicles : ";
    cin>>n;

    string plates[n];
    cout<<"Enter licence plates numbers : ";
    for(int i=0;i<n;i++)
    {
        cin>>plates[i];
    }
    string target;
    cout<<"Enter the target: ";
    cin>>target;

    int pos1=IteSea(plates,n,target);
    if(pos1!=-1)
    {
        cout<<"Iterater Search:Fount at position "<<pos1<<endl;
    }
    else
    {
        cout<<"Iterater Search:Not Fount at position "<<endl;
    }
    int pos2 = RecSea(plates, n, target,0);

    if (pos2 != -1)
    {
        cout << "Recursive Search: Found at position " << pos2 << endl;
    }
    else
    {
        cout << "Recursive Search: Not Found" << endl;
    }
    return 0;
}
