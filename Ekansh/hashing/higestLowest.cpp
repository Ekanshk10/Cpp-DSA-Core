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

    unordered_map<int, int> um;

    for (int i = 0; i < n; i++)
    {
        um[arr[i]]++;
    }

    int min = INT_MAX;
    int max = INT_MIN;
    int minElement, maxElement;
    for (auto it : um)
    {
        if (it.second < min)
        {
            min = it.second;
            minElement = it.first;
        }

        if (it.second > max)
        {
            max = it.second;
            maxElement = it.first;
        }
    }

    cout << "Min frequency element: " << minElement << endl;
    cout << "Max frequency element: " << maxElement << endl;
}


