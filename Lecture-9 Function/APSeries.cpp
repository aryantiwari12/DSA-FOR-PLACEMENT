#include <iostream>
using namespace std;

int nthterm(int n)
{
    int ap;
    for (int i = 0; i <= n; i++)
    {
        ap = (3 * n + 7);
        return ap;
    }
}

int main()
{
    int a;
    cout << "Enter a any number";
    cin >> a;
    int ans = nthterm(a);
    cout << ans << endl;

    return 0;
}
