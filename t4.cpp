#include <iostream>

using namespace std;
void powBar(int a, int aRi, int b)
{
    if (b > 1)
    {
        aRi *= a;
        b--;
        powBar(a, aRi, b);
    }
    else
        cout << aRi;
}
int main()
{
    int a;
    int b;
    cin >> a >> b;
    powBar(a, a, b);
    return 0;
}