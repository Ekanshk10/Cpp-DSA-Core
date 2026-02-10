#include <iostream>
using namespace std;

int main()
{
    int n = 5, value = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            value += 1;
            cout << value << " ";
        }
        cout << endl;
    }
}