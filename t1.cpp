#include <iostream>
#include <conio.h>

using namespace std;

bool isPrime(int number)
{
    int counter = 0;
    for (int i = 2; i <= number / 2; i++)
    {
        if (!(number % i))
            counter++;
    }
    if (!counter)
        return true;
    else
        return false;
    ;
}
int main()
{
    int number;
    cin >> number;
    if (isPrime(number))
    {
        cout << "Prime\n";
    }
    else
    {
        cout << "not Prime\n";
    }
    getch();
    return 0;
}