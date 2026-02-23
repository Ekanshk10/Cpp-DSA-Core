#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // for(int i = n-1; i>0; i--){
    //     int didSwap = 0;
    //     for(int j =0; j<=i-1; j++){
    //         if(nums[j]>nums[j+1]){
    //             int temp = nums[j];
    //             nums[j] = nums[j+1];
    //             nums[j+1] = temp;
    //             didSwap = 1;
    //         }
    //     }
    //     if(didSwap == 0) break;
    // }

    //Dutch national Flag algorithm
    
    int low = 0, mid = 0, high = nums.size()-1;
    
    while(mid<= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]== 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
    }
}
