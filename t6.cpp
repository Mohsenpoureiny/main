#include <iostream>
#include <math.h>

using namespace std;

int mazareb(int n, int max)
{
    int maxPw = pow(10, max);
    for (int i = 1; i < maxPw; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    mazareb(n, 2);
    return 0;
}