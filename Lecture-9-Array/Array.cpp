#include <iostream>
using namespace std;

void Printarray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << "printing done" << endl;
}
int main()
{
    cout << "Creating the array" << endl;

    int num[15];
    cout << "value is 14 index" << num[14] << endl;

    int second[3] = {2, 3, 5};
    cout << " value is 2 index is" << second[2] << " " << endl;

    int third[15] = {2, 7};
    int n = 3;
    Printarray(third, 3);

    int fourth[10] = {0};
    n = 10;
    // Printarray(fourth, 10);

    int fifth[10] = {1};
    n = 10;
    // Printarray(fifth, 10);

    int fifthsize = sizeof(fifth) / sizeof(int);
    cout << "Size of fifth value is" << fifthsize << endl;

    // Array with character

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    n = 5;
    cout << "Printing the character" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i];
    }
    cout << "printing done";

    double doublefirst[10];
    bool firstbool[5];

    cout << endl;
    cout << "Evething is fine" << endl;

    return 0;
}
