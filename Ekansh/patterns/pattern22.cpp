#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            int top = i;
            int left = j;
            int bottom = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;
            int minDist = min(min(top, bottom), min(left, right));
            cout << (n - minDist) << " ";
        }
        cout << endl;
    }
}