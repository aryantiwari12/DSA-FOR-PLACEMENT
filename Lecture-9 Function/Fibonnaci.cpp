#include <iostream>
using namespace std;

int fibonnaci(int n)
{
    int nextterm = 0;
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {

        nextterm = a + b;
        a = b;
        b = nextterm;
        cout << nextterm << " ";
        // return nextterm;
    }
}
int main()
{
    int a;
    cin >> a;
    int ans = fibonnaci(a);
    cout << "fibonnaci series" << endl;
    return 0;
}
