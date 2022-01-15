#include <iostream>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;
    cout << "Enter a any number" << endl;
    cin >> a;
    if (isPrime(a))
    {
        cout << "This prime number" << endl;
    }
    else
    {
        cout << "This is not prime number" << endl;
    }

    return 0;
}
