#include <iostream>
#include <math.h>

using namespace std;
int getNumberCount(int num)
{
    int i = 0;
    while (num > 0)
    {
        num = num / 10;
        i++;
    }
    return i;
}
int shift(int nm)
{
    int res = nm;
    int tmp;
    for (int i; i < 2; i++)
    {
        tmp = res % 10;
        res /= 10;
        res += pow(10, getNumberCount(res)) * tmp;
    }
    return res;
}
int main()
{
    int num;
    cin >> num;
    cout << shift(num);
    return 0;
}