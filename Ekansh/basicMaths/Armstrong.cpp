#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int length = 0;
    int originalN = n;
    int n1 = n;

    while (n > 0)
    {
        length++;
        n /= 10;
    }

    int sum = 0, rev = 0, power;

    while (originalN > 0)
    {
        rev = originalN % 10;
        power = rev;
        for (int i = 0; i < length - 1; i++)
        {
            power = rev * power;
        }
        sum = (sum + power);
        originalN /= 10;
    }

    if (sum == n1 || n == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}