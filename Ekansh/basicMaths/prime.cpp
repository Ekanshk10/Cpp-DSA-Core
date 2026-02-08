#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int isPrime = 1;
    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i != 1 && i != n)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}