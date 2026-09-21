#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }
    int i = 0;
    while (count0 > 0)
    {
        arr[i] = 0;
        i++;
        count0--;
    }
    while (count1 > 0)
    {
        arr[i] = 1;
        i++;
        count1--;
    }
    while (count2 > 0)
    {
        arr[i] = 2;
        i++;
        count2--;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
