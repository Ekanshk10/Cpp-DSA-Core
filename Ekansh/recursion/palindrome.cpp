#include <iostream>
using namespace std;
int isPalindrome(int n, int rev, int palin)
{
    if (n <= 0)
        return palin;

    rev = n % 10;
    palin = palin * 10 + rev;
    n /= 10;
    isPalindrome(n, rev, palin);
}
int main()
{
    int n = 121;
    int rev = 0, palin = 0;
    int ans = isPalindrome(n, rev, palin);

    if (ans == n)
        cout << "True";
    else
        cout << "False";
}