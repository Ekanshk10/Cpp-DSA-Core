#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    int right = 0, left = 0;
    int maxLen = 0;
    int sum = nums[0];

    int k;
    cin>> k;

    while(right<n){
        if(left<=right && sum > k){
            sum-=nums[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left+1);
        }

        right++;
        if(right < n)
            sum += nums[right];
    }

    cout<<maxLen;
}