#include <iostream>
using namespace std;

void counting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    counting(n);
    return 0;
}
