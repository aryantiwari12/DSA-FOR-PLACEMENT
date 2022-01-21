#include <iostream>
using namespace std;

int Binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = end - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

void PrintArry(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int even[8] = {5, 8, 9, 13, 15, 17, 18, 19};
    int odd[5] = {4, 5, 6, 7, 8};

    int evenIndex = Binarysearch(even, 8, 19);
    cout << "Index of 7 is" << evenIndex << endl;

    int oddIndex = Binarysearch(odd, 5, 6);
    cout << "Index of 3 is" << oddIndex << endl;
}
