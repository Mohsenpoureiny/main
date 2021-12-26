#include <iostream>

using namespace std;

int fact(int n)
{
    int fact = 1, i;
    for (i = n; i > 0; i--)
        fact *= i;
    return fact;
}
int main()
{
    int n;
    int res;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        res += fact(i);
    }
    cout << res << endl;
    res = 0;
    for (int i = 1; i <= n; i++)
    {
        int fact = 1, k;
        for (k = i; k > 0; k--)
            fact *= k;
        res += fact;
    }
    cout << res;
    return 0;
}