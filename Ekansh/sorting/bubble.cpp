#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    cout << endl;

    for (int i = n - 1; i > 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
            break;
    }
    cout << "After Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
// recursive
/*
void bubble_sort(int arr[], int n) {
    if (n == 1) return;

    int didSwap = 0;

    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
        }
    }

    if (didSwap == 0) return;
    bubble_sort(arr, n - 1);
}
*/