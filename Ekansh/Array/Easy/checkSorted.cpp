#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    for(int i = 0; i<n-1; i++){
        int isOrder = 0;
        if(a[i]<=a[i+1]) isOrder = 1;
        if(isOrder == 0){
            cout<<"False";
            return 0;
        }
    }

    cout<<"True";
    return 0;
}