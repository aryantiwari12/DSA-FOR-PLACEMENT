#include <iostream>
using namespace std;

bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a;
    cout << "Enter a number";
    cin >> a;
    if (isEven(a))
    {
        cout << "This is Even number";
    }
    else
    {
        cout << "Odd number";
    }

    return 0;
}
