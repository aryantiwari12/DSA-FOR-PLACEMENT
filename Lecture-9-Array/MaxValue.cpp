#include <iostream>
using namespace std;

int min(int num[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, num[i]);
        /*
           if (num[i] < min)
           {
               min = num[i];
           }
         */
    }
    return mini;
}
int max(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        maxi = max(maxi, arr[i]);
        /*
        if (arr[i] > max)
        {
            max = arr[i];
        }
        */
    }
    return maxi;
}
int main()
{
    int size;
    cout << "Enter a size" << endl;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Largest value is" << max(num, size) << endl;
    cout << "Minimum value is:" << min(num, size) << endl;
}
