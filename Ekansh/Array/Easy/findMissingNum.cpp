#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    int sum =0;

    for(int i = 0; i<n; i++){
        sum += a[i];
    }

    int largestNum = INT_MIN;

    for(int i = 0; i<n; i++){
        if(a[i]> largestNum) largestNum = a[i];
    }

    int actualSum = 0;
    for(int i = 0; i<largestNum; i++){
        actualSum += (i+1);
    }

    cout<<"Missing number: "<<actualSum-sum;
    return 0;
}