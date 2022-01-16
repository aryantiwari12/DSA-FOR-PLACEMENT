#include <iostream>
using namespace std;

int LinearSearch(int num[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (num[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {9, -1, 2, 3, 7, 6, 5, 6, 4, 45};
    cout << "Searching for element in array";
    int key;
    cin >> key;
    bool found = LinearSearch(arr, 10, key);
    if (found)
    {
        cout << "Prasent value" << endl;
    }
    else
    {
        cout << "Absent value" << endl;
    }

    return 0;
}
