#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a(n);

    for(int k = 0; k<n; k++){
        cin>>a[k];
    }

    int i = 0;

    for(int j = 1; j<n; j++){
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
        i++;
    }

    cout<<"After rotating: ";

    for(int x = 0; x<n; x++){
        cout<<a[x]<<" ";
    }
}