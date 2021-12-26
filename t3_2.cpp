#include <iostream>

using namespace std;
void factF(int i, int fact)
{
    if (i > 0)
    {
        fact *= i;
        i--;
        factF(i, fact);
    }
    else
        cout << fact;
}
int main()
{
    int n;
    cin >> n;
    factF(n, 1);
    return 0;
}