#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
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
    SelectionSort(arr, 5);
    cout << endl;
    cout << "After sorting array elements are - " << endl;
    PrintArray(arr, 5);
}
