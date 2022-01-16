#include <iostream>
using namespace std;

int Reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[6] = {9, -2, 3, 4, 5, 7};
    int num[5] = {2, 4, 6, 8, 10};

    Reverse(arr, 6);
    Reverse(num, 5);

    PrintArray(arr, 6);
    PrintArray(num, 5);

    return 0;
}
