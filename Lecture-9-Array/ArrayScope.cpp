#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "Inside the function";
    for (int i = 0; i < n; i++)
    {
        arr[0] = 120;
        cout << arr[i] << endl;
    }
    cout << endl;

    cout << "Going back the function";
}

int main()
{
    int num[3] = {1, 2, 3};
    update(num, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
