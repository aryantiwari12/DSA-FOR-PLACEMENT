#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }
    return fact;
}
int ncr(int n, int r)
{

    int num = factorial(n);
    int denum = factorial(r) * factorial(n - r);
    return num / denum;
}

int main()
{
    int n, r;
    // cout << "Enter two number";
    cin >> n >> r;
    // int ans = Ncr(a, b);
    cout << "Answer is:" << ncr(n, r) << endl;
    return 0;
}