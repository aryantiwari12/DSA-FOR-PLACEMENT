#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 7, 9, 3, 0};
    cout << "Before sorting array elements are - " << endl;
    PrintArray(arr, 5);
    bubbleSort(arr, 5);
    cout << endl;
    cout << "After sorting array elements are-" << endl;
    PrintArray(arr, 5);
}
