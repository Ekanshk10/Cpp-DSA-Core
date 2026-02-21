#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {2,6,5,8,11};

    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a +n);

    int i = 0, j = n-1;
    int target = 14;

    while(i<j){
        if(a[i] + a[j] < target){
            i++;    
        }
        if(a[i] + a[j] > target){
            j--;
        }
        if(a[i] +a[j] == target){
            cout<<"Yes";
            return 1;
        }   
    }
    cout<<"No";
    return 0;
}